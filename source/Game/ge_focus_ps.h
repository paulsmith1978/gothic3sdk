#ifndef GE_FOCUS_PS_H_INCLUDED
#define GE_FOCUS_PS_H_INCLUDED

enum gECombatMode;

class GE_DLLIMPORT gCFocus_PS :
    public eCEntityPropertySet
{
    public:    virtual GEU16             GetVersion( void ) const;
    public: using bCObjectBase::Write;
    public:    virtual bEResult          Write( bCOStream & );
    public:    virtual bEResult          Read( bCIStream & );
    public:    virtual void              Destroy( void );
    public:    virtual bEResult          Create( void );
    public:    virtual bEResult          CopyFrom( bCObjectBase const & );
    public:    virtual                  ~gCFocus_PS( void );
    public:    virtual bEResult          PostInitializeProperties( void );
    public:    virtual GEBool            OnNotifyPropertyValueChangedExitEx( GELPCChar, GEBool );
    public:    virtual eEPropertySetType GetPropertySetType( void ) const;
    protected: virtual GEBool            IsProcessable( void ) const;
    public:    virtual GEBool            IsVisual( void ) const;
    protected: virtual GEInt             OnAction( eCInpShared::eSGameKeyMessage const & );
    protected: virtual void              OnRender( GEI16 );
    protected: virtual void              OnProcess( void );
    protected: virtual void              OnPostProcess( void );

    public:
        static bCPropertyObjectBase const * GE_STDCALL GetRootObject( void );

    public:
        gCFocus_PS( gCFocus_PS const & );
        gCFocus_PS( void );

    public:
        gCFocus_PS const & operator = ( gCFocus_PS const & );

    public:
        GEBool &                                          AccessAutoCollectFocus( void );
        eCEntityProxy &                                   AccessCurrentEntity( void );
        bTPropertyContainer<gEFocus> &                    AccessCurrentMode( void );
        bCVector &                                        AccessCurrentPickPosition( void );
        GEBool &                                          AccessDrawCrossHair( void );
        GEBool &                                          AccessDrawFocusName( void );
        GEBool &                                          AccessEnableRangeRating( void );
        GEFloat &                                         AccessFocusLockMaxDistance( void );
        GEBool &                                          AccessFocusLocked( void );
        bTPropertyContainer<gEFocusLookAtKeysFOR> &       AccessFocusLookAtKeysFOR( void );
        bTPropertyContainer<gEFocusLookAt> &              AccessFocusLookAtMode( void );
        GEFloat &                                         AccessHardFocusMaxAzi( void );
        GEFloat &                                         AccessHardFocusMaxElev( void );
        GEFloat &                                         AccessHardFocusMaxRange( void );
        GEBool &                                          AccessHighlightFocus( void );
        GEBool &                                          AccessHighlightFocusInFight( void );
        GEFloat &                                         AccessInteractHighPriorityBonus( void );
        GEFloat &                                         AccessMagicModeCharacterPriority( void );
        GEFloat &                                         AccessMagicModeCharacterScanAzi( void );
        GEFloat &                                         AccessMagicModeCharacterScanElevDown( void );
        GEFloat &                                         AccessMagicModeCharacterScanElevUp( void );
        GEFloat &                                         AccessMagicModeCharacterScanRange( void );
        GEFloat &                                         AccessMagicModeInteractPriority( void );
        GEFloat &                                         AccessMagicModeInteractScanAzi( void );
        GEFloat &                                         AccessMagicModeInteractScanElevDown( void );
        GEFloat &                                         AccessMagicModeInteractScanElevUp( void );
        GEFloat &                                         AccessMagicModeInteractScanRange( void );
        GEFloat &                                         AccessMagicModeItemPriority( void );
        GEFloat &                                         AccessMagicModeItemScanAzi( void );
        GEFloat &                                         AccessMagicModeItemScanElevDown( void );
        GEFloat &                                         AccessMagicModeItemScanElevUp( void );
        GEFloat &                                         AccessMagicModeItemScanRange( void );
        GEFloat &                                         AccessMeleeModeCharacterPriority( void );
        GEFloat &                                         AccessMeleeModeCharacterScanAzi( void );
        GEFloat &                                         AccessMeleeModeCharacterScanElevDown( void );
        GEFloat &                                         AccessMeleeModeCharacterScanElevUp( void );
        GEFloat &                                         AccessMeleeModeCharacterScanRange( void );
        GEFloat &                                         AccessMeleeModeInteractPriority( void );
        GEFloat &                                         AccessMeleeModeInteractScanAzi( void );
        GEFloat &                                         AccessMeleeModeInteractScanElevDown( void );
        GEFloat &                                         AccessMeleeModeInteractScanElevUp( void );
        GEFloat &                                         AccessMeleeModeInteractScanRange( void );
        GEFloat &                                         AccessMeleeModeItemPriority( void );
        GEFloat &                                         AccessMeleeModeItemScanAzi( void );
        GEFloat &                                         AccessMeleeModeItemScanElevDown( void );
        GEFloat &                                         AccessMeleeModeItemScanElevUp( void );
        GEFloat &                                         AccessMeleeModeItemScanRange( void );
        GEFloat &                                         AccessNormalModeCharacterPriority( void );
        GEFloat &                                         AccessNormalModeCharacterScanAzi( void );
        GEFloat &                                         AccessNormalModeCharacterScanElevDown( void );
        GEFloat &                                         AccessNormalModeCharacterScanElevUp( void );
        GEFloat &                                         AccessNormalModeCharacterScanRange( void );
        GEFloat &                                         AccessNormalModeInteractPriority( void );
        GEFloat &                                         AccessNormalModeInteractScanAzi( void );
        GEFloat &                                         AccessNormalModeInteractScanElevDown( void );
        GEFloat &                                         AccessNormalModeInteractScanElevUp( void );
        GEFloat &                                         AccessNormalModeInteractScanRange( void );
        GEFloat &                                         AccessNormalModeItemPriority( void );
        GEFloat &                                         AccessNormalModeItemScanAzi( void );
        GEFloat &                                         AccessNormalModeItemScanElevDown( void );
        GEFloat &                                         AccessNormalModeItemScanElevUp( void );
        GEFloat &                                         AccessNormalModeItemScanRange( void );
        GEFloat &                                         AccessNormalModePreferedRange( void );
        GEFloat &                                         AccessOverrideCharacterPriority( void );
        GEFloat &                                         AccessOverrideInteractPriority( void );
        GEFloat &                                         AccessOverrideItemPriority( void );
        GEFloat &                                         AccessOverrideRange( void );
        GEFloat &                                         AccessRangedModeCharacterPriority( void );
        GEFloat &                                         AccessRangedModeCharacterScanAzi( void );
        GEFloat &                                         AccessRangedModeCharacterScanElevDown( void );
        GEFloat &                                         AccessRangedModeCharacterScanElevUp( void );
        GEFloat &                                         AccessRangedModeCharacterScanRange( void );
        GEFloat &                                         AccessRangedModeInteractPriority( void );
        GEFloat &                                         AccessRangedModeInteractScanAzi( void );
        GEFloat &                                         AccessRangedModeInteractScanElevDown( void );
        GEFloat &                                         AccessRangedModeInteractScanElevUp( void );
        GEFloat &                                         AccessRangedModeInteractScanRange( void );
        GEFloat &                                         AccessRangedModeItemPriority( void );
        GEFloat &                                         AccessRangedModeItemScanAzi( void );
        GEFloat &                                         AccessRangedModeItemScanElevDown( void );
        GEFloat &                                         AccessRangedModeItemScanElevUp( void );
        GEFloat &                                         AccessRangedModeItemScanRange( void );
        eCEntity *                                        FindFocusEntity( GEBool );
        GEBool const &                                    GetAutoCollectFocus( void ) const;
        gECombatMode                                      GetCombatMode( void ) const;
        eCEntity *                                        GetCrossHairEntity( void );
        eCEntityProxy const &                             GetCurrentEntity( void ) const;
        bTPropertyContainer<gEFocus> const &              GetCurrentMode( void ) const;
        bCVector const &                                  GetCurrentPickPosition( void ) const;
        GEBool const &                                    GetDrawCrossHair( void ) const;
        GEBool const &                                    GetDrawFocusName( void ) const;
        GEBool const &                                    GetEnableRangeRating( void ) const;
        eCEntity *                                        GetFocusEntity( gECombatMode, gEDirection );
        GEFloat const &                                   GetFocusLockMaxDistance( void ) const;
        GEBool const &                                    GetFocusLocked( void ) const;
        bTPropertyContainer<gEFocusLookAtKeysFOR> const & GetFocusLookAtKeysFOR( void ) const;
        bTPropertyContainer<gEFocusLookAt> const &        GetFocusLookAtMode( void ) const;
        GEFloat const &                                   GetHardFocusMaxAzi( void ) const;
        GEFloat const &                                   GetHardFocusMaxElev( void ) const;
        GEFloat const &                                   GetHardFocusMaxRange( void ) const;
        GEBool const &                                    GetHighlightFocus( void ) const;
        GEBool const &                                    GetHighlightFocusInFight( void ) const;
        GEFloat const &                                   GetInteractHighPriorityBonus( void ) const;
        GEFloat const &                                   GetMagicModeCharacterPriority( void ) const;
        GEFloat const &                                   GetMagicModeCharacterScanAzi( void ) const;
        GEFloat const &                                   GetMagicModeCharacterScanElevDown( void ) const;
        GEFloat const &                                   GetMagicModeCharacterScanElevUp( void ) const;
        GEFloat const &                                   GetMagicModeCharacterScanRange( void ) const;
        GEFloat const &                                   GetMagicModeInteractPriority( void ) const;
        GEFloat const &                                   GetMagicModeInteractScanAzi( void ) const;
        GEFloat const &                                   GetMagicModeInteractScanElevDown( void ) const;
        GEFloat const &                                   GetMagicModeInteractScanElevUp( void ) const;
        GEFloat const &                                   GetMagicModeInteractScanRange( void ) const;
        GEFloat const &                                   GetMagicModeItemPriority( void ) const;
        GEFloat const &                                   GetMagicModeItemScanAzi( void ) const;
        GEFloat const &                                   GetMagicModeItemScanElevDown( void ) const;
        GEFloat const &                                   GetMagicModeItemScanElevUp( void ) const;
        GEFloat const &                                   GetMagicModeItemScanRange( void ) const;
        GEFloat const &                                   GetMeleeModeCharacterPriority( void ) const;
        GEFloat const &                                   GetMeleeModeCharacterScanAzi( void ) const;
        GEFloat const &                                   GetMeleeModeCharacterScanElevDown( void ) const;
        GEFloat const &                                   GetMeleeModeCharacterScanElevUp( void ) const;
        GEFloat const &                                   GetMeleeModeCharacterScanRange( void ) const;
        GEFloat const &                                   GetMeleeModeInteractPriority( void ) const;
        GEFloat const &                                   GetMeleeModeInteractScanAzi( void ) const;
        GEFloat const &                                   GetMeleeModeInteractScanElevDown( void ) const;
        GEFloat const &                                   GetMeleeModeInteractScanElevUp( void ) const;
        GEFloat const &                                   GetMeleeModeInteractScanRange( void ) const;
        GEFloat const &                                   GetMeleeModeItemPriority( void ) const;
        GEFloat const &                                   GetMeleeModeItemScanAzi( void ) const;
        GEFloat const &                                   GetMeleeModeItemScanElevDown( void ) const;
        GEFloat const &                                   GetMeleeModeItemScanElevUp( void ) const;
        GEFloat const &                                   GetMeleeModeItemScanRange( void ) const;
        GEFloat const &                                   GetNormalModeCharacterPriority( void ) const;
        GEFloat const &                                   GetNormalModeCharacterScanAzi( void ) const;
        GEFloat const &                                   GetNormalModeCharacterScanElevDown( void ) const;
        GEFloat const &                                   GetNormalModeCharacterScanElevUp( void ) const;
        GEFloat const &                                   GetNormalModeCharacterScanRange( void ) const;
        GEFloat const &                                   GetNormalModeInteractPriority( void ) const;
        GEFloat const &                                   GetNormalModeInteractScanAzi( void ) const;
        GEFloat const &                                   GetNormalModeInteractScanElevDown( void ) const;
        GEFloat const &                                   GetNormalModeInteractScanElevUp( void ) const;
        GEFloat const &                                   GetNormalModeInteractScanRange( void ) const;
        GEFloat const &                                   GetNormalModeItemPriority( void ) const;
        GEFloat const &                                   GetNormalModeItemScanAzi( void ) const;
        GEFloat const &                                   GetNormalModeItemScanElevDown( void ) const;
        GEFloat const &                                   GetNormalModeItemScanElevUp( void ) const;
        GEFloat const &                                   GetNormalModeItemScanRange( void ) const;
        GEFloat const &                                   GetNormalModePreferedRange( void ) const;
        GEFloat const &                                   GetOverrideCharacterPriority( void ) const;
        GEFloat const &                                   GetOverrideInteractPriority( void ) const;
        GEFloat const &                                   GetOverrideItemPriority( void ) const;
        GEFloat const &                                   GetOverrideRange( void ) const;
        GEFloat const &                                   GetRangedModeCharacterPriority( void ) const;
        GEFloat const &                                   GetRangedModeCharacterScanAzi( void ) const;
        GEFloat const &                                   GetRangedModeCharacterScanElevDown( void ) const;
        GEFloat const &                                   GetRangedModeCharacterScanElevUp( void ) const;
        GEFloat const &                                   GetRangedModeCharacterScanRange( void ) const;
        GEFloat const &                                   GetRangedModeInteractPriority( void ) const;
        GEFloat const &                                   GetRangedModeInteractScanAzi( void ) const;
        GEFloat const &                                   GetRangedModeInteractScanElevDown( void ) const;
        GEFloat const &                                   GetRangedModeInteractScanElevUp( void ) const;
        GEFloat const &                                   GetRangedModeInteractScanRange( void ) const;
        GEFloat const &                                   GetRangedModeItemPriority( void ) const;
        GEFloat const &                                   GetRangedModeItemScanAzi( void ) const;
        GEFloat const &                                   GetRangedModeItemScanElevDown( void ) const;
        GEFloat const &                                   GetRangedModeItemScanElevUp( void ) const;
        GEFloat const &                                   GetRangedModeItemScanRange( void ) const;
        void                                              SetAutoCollectFocus( GEBool const & );
        void                                              SetCurrentEntity( eCEntityProxy const & );
        void                                              SetCurrentMode( bTPropertyContainer<gEFocus> const & );
        void                                              SetCurrentPickPosition( bCVector const & );
        void                                              SetDrawCrossHair( GEBool const & );
        void                                              SetDrawFocusName( GEBool const & );
        void                                              SetEnableRangeRating( GEBool const & );
        void                                              SetFocusEntity( eCEntity * );
        void                                              SetFocusLockMaxDistance( GEFloat const & );
        void                                              SetFocusLocked( GEBool const & );
        void                                              SetFocusLookAtKeysFOR( bTPropertyContainer<gEFocusLookAtKeysFOR> const & );
        void                                              SetFocusLookAtMode( bTPropertyContainer<gEFocusLookAt> const & );
        void                                              SetHardFocusMaxAzi( GEFloat const & );
        void                                              SetHardFocusMaxElev( GEFloat const & );
        void                                              SetHardFocusMaxRange( GEFloat const & );
        void                                              SetHighlightFocus( GEBool const & );
        void                                              SetHighlightFocusInFight( GEBool const & );
        void                                              SetInteractHighPriorityBonus( GEFloat const & );
        void                                              SetMagicModeCharacterPriority( GEFloat const & );
        void                                              SetMagicModeCharacterScanAzi( GEFloat const & );
        void                                              SetMagicModeCharacterScanElevDown( GEFloat const & );
        void                                              SetMagicModeCharacterScanElevUp( GEFloat const & );
        void                                              SetMagicModeCharacterScanRange( GEFloat const & );
        void                                              SetMagicModeInteractPriority( GEFloat const & );
        void                                              SetMagicModeInteractScanAzi( GEFloat const & );
        void                                              SetMagicModeInteractScanElevDown( GEFloat const & );
        void                                              SetMagicModeInteractScanElevUp( GEFloat const & );
        void                                              SetMagicModeInteractScanRange( GEFloat const & );
        void                                              SetMagicModeItemPriority( GEFloat const & );
        void                                              SetMagicModeItemScanAzi( GEFloat const & );
        void                                              SetMagicModeItemScanElevDown( GEFloat const & );
        void                                              SetMagicModeItemScanElevUp( GEFloat const & );
        void                                              SetMagicModeItemScanRange( GEFloat const & );
        void                                              SetMeleeModeCharacterPriority( GEFloat const & );
        void                                              SetMeleeModeCharacterScanAzi( GEFloat const & );
        void                                              SetMeleeModeCharacterScanElevDown( GEFloat const & );
        void                                              SetMeleeModeCharacterScanElevUp( GEFloat const & );
        void                                              SetMeleeModeCharacterScanRange( GEFloat const & );
        void                                              SetMeleeModeInteractPriority( GEFloat const & );
        void                                              SetMeleeModeInteractScanAzi( GEFloat const & );
        void                                              SetMeleeModeInteractScanElevDown( GEFloat const & );
        void                                              SetMeleeModeInteractScanElevUp( GEFloat const & );
        void                                              SetMeleeModeInteractScanRange( GEFloat const & );
        void                                              SetMeleeModeItemPriority( GEFloat const & );
        void                                              SetMeleeModeItemScanAzi( GEFloat const & );
        void                                              SetMeleeModeItemScanElevDown( GEFloat const & );
        void                                              SetMeleeModeItemScanElevUp( GEFloat const & );
        void                                              SetMeleeModeItemScanRange( GEFloat const & );
        void                                              SetNormalModeCharacterPriority( GEFloat const & );
        void                                              SetNormalModeCharacterScanAzi( GEFloat const & );
        void                                              SetNormalModeCharacterScanElevDown( GEFloat const & );
        void                                              SetNormalModeCharacterScanElevUp( GEFloat const & );
        void                                              SetNormalModeCharacterScanRange( GEFloat const & );
        void                                              SetNormalModeInteractPriority( GEFloat const & );
        void                                              SetNormalModeInteractScanAzi( GEFloat const & );
        void                                              SetNormalModeInteractScanElevDown( GEFloat const & );
        void                                              SetNormalModeInteractScanElevUp( GEFloat const & );
        void                                              SetNormalModeInteractScanRange( GEFloat const & );
        void                                              SetNormalModeItemPriority( GEFloat const & );
        void                                              SetNormalModeItemScanAzi( GEFloat const & );
        void                                              SetNormalModeItemScanElevDown( GEFloat const & );
        void                                              SetNormalModeItemScanElevUp( GEFloat const & );
        void                                              SetNormalModeItemScanRange( GEFloat const & );
        void                                              SetNormalModePreferedRange( GEFloat const & );
        void                                              SetOverrideCharacterPriority( GEFloat const & );
        void                                              SetOverrideInteractPriority( GEFloat const & );
        void                                              SetOverrideItemPriority( GEFloat const & );
        void                                              SetOverrideRange( GEFloat const & );
        void                                              SetRangedModeCharacterPriority( GEFloat const & );
        void                                              SetRangedModeCharacterScanAzi( GEFloat const & );
        void                                              SetRangedModeCharacterScanElevDown( GEFloat const & );
        void                                              SetRangedModeCharacterScanElevUp( GEFloat const & );
        void                                              SetRangedModeCharacterScanRange( GEFloat const & );
        void                                              SetRangedModeInteractPriority( GEFloat const & );
        void                                              SetRangedModeInteractScanAzi( GEFloat const & );
        void                                              SetRangedModeInteractScanElevDown( GEFloat const & );
        void                                              SetRangedModeInteractScanElevUp( GEFloat const & );
        void                                              SetRangedModeInteractScanRange( GEFloat const & );
        void                                              SetRangedModeItemPriority( GEFloat const & );
        void                                              SetRangedModeItemScanAzi( GEFloat const & );
        void                                              SetRangedModeItemScanElevDown( GEFloat const & );
        void                                              SetRangedModeItemScanElevUp( GEFloat const & );
        void                                              SetRangedModeItemScanRange( GEFloat const & );

    protected:
        static GEBool GE_STDCALL S_FilterEntity( eCEntity *, eCCollisionShape * );

    protected:
        void    CollectInteractionEntities( GEFloat );
        GEBool  FocusCheck( eCEntity *, eCEntity *, GEFloat, GEFloat & );
        GEBool  FocusCheckBBox( eCEntity *, eCEntity *, GEFloat, GEFloat & );
        void    GetAngles( bCVector const &, GEFloat &, GEFloat & ) const;
        void    GetAngles( eCEntity *, GEFloat &, GEFloat & ) const;
        void    GetCurrentMaxAngles( GEFloat &, GEFloat &, GEFloat & ) const;
        GEFloat GetCurrentMaxRange( void ) const;
        GEFloat GetCurrentPriority( eCEntity * ) const;
        GEBool  HasLowerPriority( eCEntity *, eCEntity * ) const;
        void    Invalidate( void );
        GEBool  IsEntityInAngles( eCEntity *, GEFloat, GEFloat ) const;
        GEBool  IsEntityInRange2( eCEntity *, GEFloat ) const;
        GEBool  IsEntityInRange( eCEntity *, GEFloat ) const;
        GEBool  IsValidEntity( eCEntity * ) const;

};

#endif
