#ifndef GE_APIDEVICE_H_INCLUDED
#define GE_APIDEVICE_H_INCLUDED

class GE_DLLIMPORT eCAPIDevice
{
    public:
        struct eSImageInfo;
        struct eSAPIModeParameters;
        struct eSAPIMaterial;
        struct eSAPIStartParameters;

    public: virtual bEResult CreatePrimititve( eCAPIPrimitive * * ) = 0;
    public: virtual bEResult CreateIndexData( struct eCGfxShared::eSGfxIndexBufDesc const &, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreateVertexData( struct eCGfxShared::eSGfxVertexBufDesc const &, eCAPIVertexData * * ) = 0;
    public: virtual bEResult CreateEffect( GELPVoid, GEUInt, eCAPIEffect * * ) = 0;
    public: virtual bEResult PreprocessShader( struct eCGfxShared::eSGfxHLSLShaderSrc const &, bCString & ) = 0;
    public: virtual bEResult CreateHLSLShader( eCAPIHLSLShader * * ) = 0;
    public: virtual bEResult CreateTexture( struct eCGfxShared::eSGfxLayersDesc const &, eCAPITexture * * ) = 0;
    public: virtual bEResult CreateTextureFromFile( struct eCGfxShared::eSGfxLayersDesc &, GELPChar const, eCAPITexture * * ) = 0;
    public: virtual bEResult CreateCubeMapFromFile( struct eCGfxShared::eSGfxLayersDesc &, GELPChar const, eCAPICubeMap * * ) = 0;
    public: virtual bEResult CreateTextureFromMemory( struct eCGfxShared::eSGfxLayersDesc &, GELPVoid, GEUInt, eCAPITexture * * ) = 0;
    public: virtual bEResult CreateCubeMapFromMemory( struct eCGfxShared::eSGfxLayersDesc &, GELPVoid, GEUInt, eCAPICubeMap * * ) = 0;
    public: virtual bEResult CreateCubeMap( struct eCGfxShared::eSGfxLayersDesc const &, eCAPICubeMap * * ) = 0;
    public: virtual bEResult CreateVolume( struct eCGfxShared::eSGfxLayersDesc const &, eCAPIVolume * * ) = 0;
    public: virtual bEResult CreateFontA( struct eCGfxShared::eSFontDesc &, eCAPIFont * * ) = 0;
    public: virtual bEResult CreateSprite( struct eCGfxShared::eSSpriteDesc &, eCAPISprite * * ) = 0;
    public: virtual bEResult GetImageInfoFromFile( bCString const &, struct eCAPIDevice::eSImageInfo & ) = 0;
    public: virtual bEResult CheckDeviceFormat( struct eCGfxShared::eSGfxLayersDesc const &, GEBool ) = 0;
    public: virtual bEResult ToggleNewMode( struct eCAPIDevice::eSAPIModeParameters const & ) = 0;
    public: virtual bEResult IsResetNecessary( GEBool * ) = 0;
    public: virtual bEResult IsResetNeeded( GEBool * ) = 0;
    public: virtual bEResult Reset( void ) = 0;
    public: virtual bEResult EnableClipping( GEBool ) = 0;
    public: virtual bEResult GetClippingEnables( GEBool & ) = 0;
    public: virtual bEResult SetScissor( bCRect const & ) = 0;
    public: virtual bEResult GetScissor( bCRect & ) = 0;
    public: virtual bEResult EnableScissor( GEBool ) = 0;
    public: virtual GEBool   IsScissorEnabled( void ) = 0;
    public: virtual bEResult SetViewport( struct eCGfxShared::eSGfxViewport const & ) = 0;
    public: virtual bEResult GetViewport( struct eCGfxShared::eSGfxViewport & ) = 0;
    public: virtual bEResult ClearViewport( eCGfxShared::eEViewportClear, GEU32, GEFloat, GEU32 ) = 0;
    public: virtual bEResult SwapScreen( struct HWND__ *, bCRect const *, bCRect const * ) = 0;
    public: virtual bEResult BeginScene( void ) = 0;
    public: virtual bEResult EndScene( void ) = 0;
    public: virtual bEResult SetMasterRenderMode( eCGfxShared::eEMasterRenderMode ) = 0;
    public: virtual bEResult GetMasterRenderMode( eCGfxShared::eEMasterRenderMode * ) = 0;
    public: virtual bEResult SetMasterShadeMode( eCGfxShared::eEMasterShadeMode ) = 0;
    public: virtual bEResult GetMasterShadeMode( eCGfxShared::eEMasterShadeMode * ) = 0;
    public: virtual bEResult SetMasterCullingMode( eCGfxShared::eEMasterCullingMode ) = 0;
    public: virtual bEResult GetMasterCullingMode( eCGfxShared::eEMasterCullingMode * ) = 0;
    public: virtual bEResult SetMasterDepthTesting( eCGfxShared::eEMasterCmpFunc ) = 0;
    public: virtual bEResult GetMasterDepthTesting( eCGfxShared::eEMasterCmpFunc * ) = 0;
    public: virtual bEResult SetMasterDepthWrite( eCGfxShared::eEMasterWrite ) = 0;
    public: virtual bEResult GetMasterDepthWrite( eCGfxShared::eEMasterWrite * ) = 0;
    public: virtual bEResult SetMasterDepthBias( GEBool, GEFloat, GEFloat ) = 0;
    public: virtual bEResult GetMasterDepthBias( GEBool *, GEFloat *, GEFloat * ) = 0;
    public: virtual bEResult SetMasterZBias( GEBool, GEU32 ) = 0;
    public: virtual bEResult GetMasterZBias( GEBool *, GEU32 * ) = 0;
    public: virtual bEResult SetMasterStencilTesting( eCGfxShared::eEMasterStencil, struct eCGfxShared::eSGfxStencilData const & ) = 0;
    public: virtual bEResult GetMasterStencilTesting( eCGfxShared::eEMasterStencil *, struct eCGfxShared::eSGfxStencilData * ) = 0;
    public: virtual bEResult SetMasterBlending( eCGfxShared::eEMasterBlending, eCGfxShared::eEMasterBlending ) = 0;
    public: virtual bEResult GetMasterBlending( eCGfxShared::eEMasterBlending *, eCGfxShared::eEMasterBlending * ) = 0;
    public: virtual bEResult SetMasterAlphaTesting( eCGfxShared::eEMasterAlphaTest, struct eCGfxShared::eSGfxAlphaTestData const & ) = 0;
    public: virtual bEResult GetMasterAlphaTesting( eCGfxShared::eEMasterAlphaTest *, struct eCGfxShared::eSGfxAlphaTestData * ) = 0;
    public: virtual bEResult SetMasterFogging( eCGfxShared::eEMasterFogging ) = 0;
    public: virtual bEResult GetMasterFogging( eCGfxShared::eEMasterFogging * ) = 0;
    public: virtual bEResult SetLighting( GEBool ) = 0;
    public: virtual bEResult GetLighting( GEBool * ) = 0;
    public: virtual bEResult SetAlphaBlending( GEBool ) = 0;
    public: virtual bEResult GetAlphaBlending( GEBool * ) = 0;
    public: virtual bEResult SetColorWriting( GEBool ) = 0;
    public: virtual bEResult GetColorWriting( GEBool * ) = 0;
    public: virtual bEResult SetAlphaWriting( GEBool ) = 0;
    public: virtual bEResult GetAlphaWriting( GEBool * ) = 0;
    public: virtual bEResult SetSpecularEffect( GEBool ) = 0;
    public: virtual bEResult GetSpecularEffect( GEBool * ) = 0;
    public: virtual bEResult SetGammaRamp( GEBool, struct eCGfxShared::eSGfxGammaRamp const * ) = 0;
    public: virtual bEResult GetGammaRamp( struct eCGfxShared::eSGfxGammaRamp * ) = 0;
    public: virtual bEResult SetRenderMode( eCGfxShared::eERenderMode ) = 0;
    public: virtual bEResult SetShadeMode( eCGfxShared::eEShadeMode ) = 0;
    public: virtual bEResult SetCullingMode( eCGfxShared::eECullingMode ) = 0;
    public: virtual bEResult SetDepthTesting( eCGfxShared::eECmpFunc ) = 0;
    public: virtual bEResult SetDepthWrite( eCGfxShared::eEWrite ) = 0;
    public: virtual bEResult SetDepthBias( GEFloat, GEFloat ) = 0;
    public: virtual bEResult SetZBias( GEU32 ) = 0;
    public: virtual bEResult SetStencilTesting( eCGfxShared::eEStencil, struct eCGfxShared::eSGfxStencilData const & ) = 0;
    public: virtual bEResult SetViewAndProjectionMatrices( bCMatrix const *, bCMatrix const * ) = 0;
    public: virtual bEResult SetWorldMatrix( bCMatrix const * ) = 0;
    public: virtual bEResult GetWorldMatrix( bCMatrix * ) = 0;
    public: virtual bEResult SetViewMatrix( bCMatrix const * ) = 0;
    public: virtual bEResult GetViewMatrix( bCMatrix * ) = 0;
    public: virtual bEResult Draw( struct eCGfxShared::eSGfxDrawCallDesc const & ) = 0;
    public: virtual bEResult DrawUP( eCGfxShared::eEPrimitiveType, GEUInt, GELPVoid const, GEUInt ) = 0;
    public: virtual bEResult SetLights( GEU32, GEU32, GEBool const *, struct eCGfxShared::eSGfxLightData const * ) = 0;
    public: virtual bEResult SetFog( struct eCGfxShared::eSGfxFogData & ) = 0;
    public: virtual bEResult SetMaterial( struct eCAPIDevice::eSAPIMaterial const * ) = 0;
    public: virtual bEResult SetColorFactor( GEU32 ) = 0;
    public: virtual bEResult SetBlending( eCGfxShared::eEBlending, eCGfxShared::eEBlending ) = 0;
    public: virtual bEResult SetAlphaTesting( eCGfxShared::eEAlphaTest, struct eCGfxShared::eSGfxAlphaTestData const & ) = 0;
    public: virtual bEResult SetAmbientMaterialSource( eCGfxShared::eEMaterialColorSrc ) = 0;
    public: virtual bEResult SetDiffuseMaterialSource( eCGfxShared::eEMaterialColorSrc ) = 0;
    public: virtual bEResult SetSpecularMaterialSource( eCGfxShared::eEMaterialColorSrc ) = 0;
    public: virtual bEResult SetEmissiveMaterialSource( eCGfxShared::eEMaterialColorSrc ) = 0;
    public: virtual bEResult CreateVertexDeclaration( struct eCGfxShared::eSGfxDclElement const *, GELPVoid * ) = 0;
    public: virtual bEResult DestroyVertexDeclaration( GELPVoid ) = 0;
    public: virtual bEResult GetVertexDeclarationData( GELPVoid, struct eCGfxShared::eSGfxDclElement *, GEUInt * ) = 0;
    public: virtual bEResult SetVertexDeclaration( GELPVoid ) = 0;
    public: virtual bEResult CreateVertexProgram( GELPVoid, GELPVoid, GEU32 *, GEBool ) = 0;
    public: virtual bEResult DestroyVertexProgram( GEU32 ) = 0;
    public: virtual bEResult GetVertexProgramData( GEU32, GELPVoid, GEUInt * ) = 0;
    public: virtual bEResult SetVertexProgramRegisterF( GEU32, GEFloat const *, GEU32 ) = 0;
    public: virtual bEResult SetVertexProgramRegisterI( GEU32, GEInt const *, GEU32 ) = 0;
    public: virtual bEResult SetVertexProgramRegisterB( GEU32, GEInt const *, GEU32 ) = 0;
    public: virtual bEResult GetVertexProgramRegisterF( GEU32, GEFloat *, GEU32 ) = 0;
    public: virtual bEResult GetVertexProgramRegisterI( GEU32, GEInt *, GEU32 ) = 0;
    public: virtual bEResult GetVertexProgramRegisterB( GEU32, GEInt *, GEU32 ) = 0;
    public: virtual bEResult SetVertexProgram( GEU32, GEBool, GEBool ) = 0;
    public: virtual bEResult CreatePixelProgram( GELPVoid, GEU32 * ) = 0;
    public: virtual bEResult DestroyPixelProgram( GEU32 ) = 0;
    public: virtual bEResult GetPixelProgramData( GEU32, GELPVoid, GEUInt * ) = 0;
    public: virtual bEResult SetPixelProgramRegisterF( GEU32, GEFloat const *, GEU32 ) = 0;
    public: virtual bEResult SetPixelProgramRegisterI( GEU32, GEInt const *, GEU32 ) = 0;
    public: virtual bEResult SetPixelProgramRegisterB( GEU32, GEInt const *, GEU32 ) = 0;
    public: virtual bEResult GetPixelProgramRegisterF( GEU32, GEFloat *, GEU32 ) = 0;
    public: virtual bEResult GetPixelProgramRegisterI( GEU32, GEInt *, GEU32 ) = 0;
    public: virtual bEResult GetPixelProgramRegisterB( GEU32, GEInt *, GEU32 ) = 0;
    public: virtual bEResult SetPixelProgram( GEU32 ) = 0;
    public: virtual bEResult AssembleShaderProgram( GELPChar const, GEU32, struct eCGfxShared::eSGfxMacro *, GELPVoid *, GELPVoid * ) = 0;
    public: virtual bEResult AssembleShaderProgramFromFile( GELPCChar const, struct eCGfxShared::eSGfxMacro *, GELPVoid *, GELPVoid * ) = 0;
    public: virtual bEResult CompileEffect( struct eCGfxShared::eSGfxEffectSource const &, GELPVoid *, GELPVoid * ) = 0;
    public: virtual bEResult CompileEffectFromFile( struct eCGfxShared::eSGfxEffectFileSource const &, GELPVoid *, GELPVoid * ) = 0;
    public: virtual bEResult CreateAuxBuffer( GEU32, GELPVoid * ) = 0;
    public: virtual bEResult DestroyAuxBuffer( GELPVoid ) = 0;
    public: virtual bEResult GetAuxBuffer( GELPVoid, GELPVoid *, GEU32 * ) = 0;
    public: virtual bEResult SetTextureAdressing( GEU32, eCGfxShared::eETexAddress, eCGfxShared::eETexAddress, eCGfxShared::eETexAddress ) = 0;
    public: virtual bEResult SetTextureFiltering( GEU32, eCGfxShared::eETexFilter, eCGfxShared::eETexFilter, eCGfxShared::eETexFilter ) = 0;
    public: virtual bEResult SetTextureCoordinateIndexAndCalc( GEU32, GEU32, eCGfxShared::eETexCoordCalc ) = 0;
    public: virtual bEResult SetSamplerState( GEU32, eCGfxShared::eESamplerState, GEU32 ) = 0;
    public: virtual bEResult SetTextureCoordinateTransform( GEU32, GEU32 ) = 0;
    public: virtual bEResult SetTextureMatrix( GEU32, bCMatrix const * ) = 0;
    public: virtual bEResult SetResultArgument( GEU32, eCGfxShared::eETexArgument ) = 0;
    public: virtual bEResult SetColorCalc( GEU32, eCGfxShared::eETexOperation, eCGfxShared::eETexArgument, eCGfxShared::eETexArgument ) = 0;
    public: virtual bEResult SetAlphaCalc( GEU32, eCGfxShared::eETexOperation, eCGfxShared::eETexArgument, eCGfxShared::eETexArgument ) = 0;
    public: virtual bEResult CreateDepthBuffer( GEU32, GEU32, eCGfxShared::eEDepthFormat, GELPVoid * ) = 0;
    public: virtual bEResult DestroyDepthBuffer( GELPVoid ) = 0;
    public: virtual bEResult SetRenderTarget( GELPVoid, GELPVoid, GELPVoid ) = 0;
    public: virtual bEResult GetRenderTarget( GELPVoid *, GELPVoid * ) = 0;
    public: virtual bEResult GetFVFSize( GEU32, GEU32 * ) = 0;
    public: virtual bEResult SetClipPlane( GEU32 ) = 0;
    public: virtual bEResult SetClipPlaneData( GEU32, struct eCGfxShared::eSGfxPlaneData & ) = 0;
    public: virtual bEResult GetClipPlaneData( GEU32, struct eCGfxShared::eSGfxPlaneData & ) = 0;
    public: virtual bEResult SetTextureNULL( GEU32 ) = 0;
    public: virtual bEResult SetIndexDataNULL( void ) = 0;
    public: virtual bEResult SetVertexDataNULL( GEU32 ) = 0;
    public: virtual bEResult GetMethodSupport( struct eCGfxShared::eSGfxAssistantMethods * ) = 0;
    public: virtual bEResult GenerateLODMesh( eCAPIVertexData *, eCAPIIndexData *, struct eCGfxShared::eSGfxAttributeWeigths const &, bTValArray<GEFloat> const *, GEU32, eCAPIVertexData * *, eCAPIIndexData * *, GEBool ) = 0;
    public: virtual bEResult CreateBox( struct eCGfxShared::eSGfxBoxData const &, eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreateCylinder( struct eCGfxShared::eSGfxCylinderData const &, eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreatePolygon( struct eCGfxShared::eSGfxPolygonData const &, eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreateSphere( struct eCGfxShared::eSGfxSphereData const &, eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreateTeapot( eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreateText( struct eCGfxShared::eSGfxTextData const &, eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult CreateTorus( struct eCGfxShared::eSGfxTorusData const &, eCAPIVertexData * *, eCAPIIndexData * * ) = 0;
    public: virtual bEResult SaveBackbufferToFile( GELPChar const ) = 0;
    public: virtual bEResult SaveBackbufferToMemory( bCMemoryStream & ) = 0;
    public: virtual bEResult DrawTextA( GELPCChar const, GEU32, bCRect const & ) = 0;
    public: virtual bEResult CreateOcclusionQuery( GELPVoid & ) = 0;
    public: virtual bEResult DestroyOcclusionQuery( GELPVoid const ) = 0;
    public: virtual bEResult BeginOcclusionTest( GELPVoid const ) = 0;
    public: virtual bEResult EndOcclusionTest( GELPVoid const ) = 0;
    public: virtual bEResult GetOcclusionTestInfo( GELPVoid const, GEU32 &, GEBool ) = 0;
    public: virtual void     EnableOptimization( void ) = 0;
    public: virtual void     DisableOptimization( void ) = 0;
    public: virtual void     SetForceLowestMipMapLevel( GEBool ) = 0;
    public: virtual GEBool   GetForceLowestMipMapLevel( void ) = 0;
    public: virtual bEResult BeginSpriteList( eCGfxShared::eESpriteRenderOpt ) = 0;
    public: virtual bEResult EndSpriteList( void ) = 0;
    public: virtual bEResult FlushSpriteList( void ) = 0;
    public: virtual bEResult SetSpriteListTransform( bCMatrix const & ) = 0;
    public: virtual bEResult GetSpriteListTransform( bCMatrix & ) = 0;
    public: virtual bEResult AddSpriteToSpriteList( eCAPITexture *, bCRect const *, bCVector const *, bCVector const *, GEU32 ) = 0;
    public: virtual GEInt    CalcTextRect( eCAPIFont *, GELPCChar, GEInt, bCRect &, GEU32 ) = 0;
    public: virtual GEInt    CalcTextRect( eCAPIFont *, GELPCUnicodeChar, GEInt, bCRect &, GEU32 ) = 0;
    public: virtual GEInt    DrawTextViaSpriteList( eCAPIFont *, bCString const &, GEInt, bCRect const *, GEU32, GEU32 ) = 0;
    public: virtual GEInt    DrawTextViaSpriteList( eCAPIFont *, bCUnicodeString const &, GEInt, bCRect const *, GEU32, GEU32 ) = 0;
    public: virtual void     SetEffectCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetTextureCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetCubemapCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetVolumeCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetVertexBufferCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetIndexBufferCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetVertexShaderCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetPixelShaderCreateCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetTextureLockCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetCubemapLockCallback( void ( GE_STDCALL* )( void ) ) = 0;
    public: virtual void     SetVolumeLockCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetVertexBufferLockCallback( void ( GE_STDCALL* )( void ) ) = 0;
    public: virtual void     SetIndexBufferLockCallback( void ( GE_STDCALL* )( void ) ) = 0;
    public: virtual void     SetRenderStateActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetTextureStageStateActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetSamplerStateActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetEffectActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetTextureActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetCubemapActCallback( void ( GE_STDCALL* )( void ) ) = 0;
    public: virtual void     SetVolumeActCallback( void ( GE_STDCALL* )( void ) ) = 0;
    public: virtual void     SetVertexShaderActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetPixelShaderActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetRenderTargetActCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual void     SetDrawCallback( void ( __stdcall * )( void ) ) = 0;
    public: virtual GEU32    GetDrawnVisualVertices( void ) const = 0;
    public: virtual GEU32    GetDrawnVisualIndices( void ) const = 0;
    public: virtual GEU32    GetNumDrawCalls( void ) const = 0;
    public: virtual bEResult CreateUVAtlas( bTValArray<bCVector> const &, bTValArray<GEU32> &, bTValArray<bCVector2> &, bTValArray<GEU32> &, bTValArray<GEU32> &, GEFloat ) = 0;
    public: virtual         ~eCAPIDevice( void );

    public:
        eCAPIDevice( eCAPIDevice const & );

    public:
        eCAPIDevice & operator = ( eCAPIDevice const & );

    public:
        GEU32 AddRef( void );
        GEU32 Release( void );

    protected:
        eCAPIDevice( void );

    private:
        GEU32 m_u32ReferenceCount;
};

#endif
