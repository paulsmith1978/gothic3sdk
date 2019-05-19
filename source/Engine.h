#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include "GFC.h"

#include "Engine/EngineEnum.h"

class eCEntity;
#include "Engine/ge_camerabase.h"

#include "Engine/ge_virtualfile.h"
#include "Engine/ge_virtualfilefind.h"
#include "Engine/ge_virtualfilesystem.h"

#include "Engine/ge_configfile.h"
#include "Engine/ge_unicodeconfigfile_keyobject.h"
#include "Engine/ge_unicodeconfigfile_sectionobject.h"
#include "Engine/ge_unicodeconfigfile.h"
#include "Engine/ge_archivefile.h"
#include "Engine/ge_archivemanager.h"
#include "Engine/ge_processibleelement.h"

#include "Engine/ge_locstring.h"
#include "Engine/ge_loctable.h"
#include "Engine/ge_locadmin.h"
#include "Engine/ge_contextbase.h"
#include "Engine/ge_node.h"

#include "Engine/ge_inputreceiver.h"
#include "Engine/ge_enginecomponentbase.h"
#include "Engine/ge_inputdispatcher.h"
#include "Engine/ge_actionmapper.h"
#include "Engine/ge_moduleadmin.h"
#include "Engine/ge_scriptadminbase.h"

class eCGfxShared {
    public:
        struct eSGfxContextDesc;
        struct eSGfxLayersDesc;
        struct eSFontDesc
        {
              GEU32 Height;
              GEU32 Width;
              GEU32 Weight;
              GEU32 MipLevels;
              GEBool Italic;
              GE_PADDING(3)
              GEU32 CharSet;
              GEU32 OutPrecision;
              GEU32 Quality;
              GEU32 PitchAndFamily;
              bCUnicodeString FaceName;
        };

};
class eCGfxImageData;
#include "Engine/ge_font.h"
#include "Engine/ge_apifont.h"
#include "Engine/ge_gfxfont.h"
#include "Engine/ge_fontadmin.h"
#include "Engine/ge_vertexfont.h"
#include "Engine/ge_systemfont.h"
#include "Engine/ge_dx9font.h"

#include "Engine/ge_keyboard.h"
#include "Engine/ge_wnd.h"
#include "Engine/ge_desktop.h"
#include "Engine/ge_dialog.h"
#include "Engine/ge_objectinspectordlg.h"
#include "Engine/ge_consoledlg.h"
#include "Engine/ge_consoledata.h"
#include "Engine/ge_consolecommands.h"
#include "Engine/ge_commandmanager.h"
#include "Engine/ge_console.h"
#include "Engine/ge_guiadmin.h"
#include "Engine/ge_guimodule.h"
#include "Engine/ge_guimanager.h"

#include "Engine/ge_entityproxyinternal.h"
#include "Engine/ge_entityproxy.h"
#include "Engine/ge_templateentityproxy.h"
#include "Engine/ge_entitypropertyset.h"
#include "Engine/ge_propertysetproxy.h"
#include "Engine/ge_entity.h"
#include "Engine/ge_templateentity.h"
#include "Engine/ge_dynamicentity.h"

/*

//HACK: bTRefPtrArray is like bTPtrArray but uses Add/ReleaseReference of the elements.
#define bTRefPtrArray bTPtrArray
//HACK: Get Entity classes it compiling...

*/
template< typename T >
class bTRefPtrArray : public bTPtrArray< T >
{
};

#include "Engine/ge_collisionshape.h"
#include "Engine/ge_collisionshapebase_ps.h"
#include "Engine/ge_collisionshape_ps.h"
#include "Engine/ge_physicqueryreport.h"
#include "Engine/ge_physicsscene.h"

#include "Engine/ge_resourcebase_ps.h"
#include "Engine/ge_resourcedataentity.h"
#include "Engine/ge_resourcecollisionmesh_ps.h"

#include "Engine/ge_spatialentity.h"
#include "Engine/ge_geometryspatialcontext.h"
#include "Engine/ge_entitydynamiccontext.h"

#include "Engine/ge_maincache.h"

#include "Engine/ge_resourceadmin.h"
#include "Engine/ge_entityadmin.h"
#include "Engine/ge_sceneadmin.h"

#include "Engine/ge_visualmeshbase_ps.h"
#include "Engine/ge_visualmeshstatic_ps.h"
#include "Engine/ge_visualmeshdynamic_ps.h"

#include "Engine/ge_rigidbodybase_ps.h"
#include "Engine/ge_rigidbody_ps.h"

#include "Engine/ge_illuminated_ps.h"

#include "Engine/ge_elodmesh.h"

class eCPVSPrefetcher3;
#include "Engine/ge_pvscellitem.h"
#include "Engine/ge_pvsprefetcherjob.h"
#include "Engine/ge_pvsprefetcher3.h"
#include "Engine/ge_rendersystemadmin.h"

#include "Engine/ge_messagehandler.h"
#include "Engine/ge_window.h"
#include "Engine/ge_application.h"

#endif