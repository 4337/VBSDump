#include <idc.idc>

static ERROR(ret,msg) {
       Message("%s",msg);
	   return ret;
}


static CLEAR(ret,msg) {
       ERROR(ret,msg);
	   DelStruc( GetStrucIdByName("mThunRTMain"));
	   DelStruc( GetStrucIdByName("mProjectInfo"));
	   DelStruc( GetStrucIdByName("mObjectTable"));
	   DelStruc( GetStrucIdByName("mObject"));
	   DelStruc( GetStrucIdByName("mObjectInfo"));
	   DelStruc( GetStrucIdByName("mProjectTree"));
	   DelStruc( GetStrucIdByName("mPrivFormDesc"));
	   return ret;
}



static StructuresInit(mId) {  
       auto tId;
       mId = AddStrucEx(-1,"mThunRTMain",0);	
       if(mId == -1) return ERROR(-1,"[1]. AddStrucEx(mThunRTMain)\r\n");	   
	   else {  
	     if(AddStrucMember(mId,"Signature",0,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.Signature\r\n");
		 if(AddStrucMember(mId,"RuntimeBuild",0x4,FF_BYTE,-1,2) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.RuntimeBuild\r\n");
	     if(AddStrucMember(mId,"LanguageDLL",0x6,FF_BYTE,-1,14) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.LanguageDLL\r\n");
		 if(AddStrucMember(mId,"BackupLanguageDLL",20,FF_BYTE,-1,14) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.BackupLanguageDLL\r\n");
		 if(AddStrucMember(mId,"RuntimeDLLVersion",34,FF_BYTE,-1,2) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.RuntimeDLLVersion\r\n");
	     if(AddStrucMember(mId,"LanguageID",36,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.LanguageID\r\n");
	     if(AddStrucMember(mId,"BackupLanguageID",40,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.BackupLanguageID\r\n");
	     if(AddStrucMember(mId,"aSubMain",44,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.aSubMain\r\n");
		 if(AddStrucMember(mId,"aProjectInfo",48,FF_BYTE,0,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.aProjectInfo\r\n");   //
	     if(AddStrucMember(mId,"fMDLIntObjs",52,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.fMDLIntObjs\r\n");
		 if(AddStrucMember(mId,"fMDLIntObjs2",56,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.fMDLIntObjs2\r\n");
		 if(AddStrucMember(mId,"ThreadFlags",60,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.ThreadFlags\r\n");
		 if(AddStrucMember(mId,"ThreadCount",64,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.ThreadCount\r\n");
		 if(AddStrucMember(mId,"FormCount",68,FF_BYTE,-1,2) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.FormCount\r\n"); 
		 if(AddStrucMember(mId,"ExternalComponentCount",70,FF_BYTE,-1,2) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.ExternalComponentCount\r\n"); 
         if(AddStrucMember(mId,"ThunkCount",72,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.ThunkCount\r\n"); 		 
         if(AddStrucMember(mId,"aGUITable",76,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.aGUITable\r\n"); 		
		 if(AddStrucMember(mId,"aExternalComponentTable",80,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.aExternalComponentTable\r\n"); 	
		 if(AddStrucMember(mId,"aComRegisterData",84,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.aComRegisterData\r\n"); 	
		 if(AddStrucMember(mId,"oProjectExename",88,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.oProjectExename\r\n"); 	
		 if(AddStrucMember(mId,"oProjectTitle",92,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.oProjectTitle\r\n"); 
		 if(AddStrucMember(mId,"oHelpFile",96,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.oHelpFile\r\n"); 
		 if(AddStrucMember(mId,"oProjectName",100,FF_BYTE,-1,4) != 0) return ERROR(-2,"[!]. StructureInit->AddStructMember error mThunRTMain.oProjectName\r\n"); 
	   }
	   tId = AddStrucEx(-1,"mProjectInfo",0);
	   if(tId == -1) {
	      return ERROR(-1,"[1]. AddStrucEx(mProjectInfo)\r\n");
	   } else {
	      if(AddStrucMember(tId,"Version",0,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->Version\r\n");
		  if(AddStrucMember(tId,"ObjectTable",4,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->ObjectTable\r\n");  //ptr
		  if(AddStrucMember(tId,"dwNull",8,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->dwNull\r\n"); 
		  if(AddStrucMember(tId,"CodeStart",12,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->CodeStart\r\n");
		  if(AddStrucMember(tId,"CodeEnd",16,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->CodeEnd\r\n");
		  if(AddStrucMember(tId,"DataSize",20,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->DataSize\r\n");
		  if(AddStrucMember(tId,"ThreadSpace",24,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->ThreadSpace\r\n"); //ptr
		  if(AddStrucMember(tId,"VbSeh",28,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->VbSeh\r\n");  //ptr 2 Vb except handler
		  if(AddStrucMember(tId,"NativeCode",32,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->NativeCode\r\n"); //ptr 2 NativeCode
		  if(AddStrucMember(tId,"PathInfo",36,FF_BYTE,-1,264 * 2) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->PathInfo\r\n");  //unicode ?
		  if(AddStrucMember(tId,"IIAT",564,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->IIAT\r\n");  //ptr
		  if(AddStrucMember(tId,"IIATSize",568,FF_BYTE,-1,4) != 0) return ERROR(-3,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->IIATSize\r\n");
	   }
	   tId = AddStrucEx(-1,"mObjectTable",0);
	   if(tId == -1) {
	      return ERROR(-1,"[1]. AddStrucEx(mObjectTable)\r\n");
	   } else {
	      if(AddStrucMember(tId,"IsNull",0,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->IsNull\r\n");
		  if(AddStrucMember(tId,"ExecProjCOM",4,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->ExecProjCOM\r\n");
		  if(AddStrucMember(tId,"ProjectTreeInfo",8,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->ProjectTreeInfo\r\n"); //here is member (ptr) to FormList (form descriptions)
		  if(AddStrucMember(tId,"Reserved1",12,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->Reserved1\r\n");
		  if(AddStrucMember(tId,"IsNull1",16,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->IsNull1\r\n");
		  if(AddStrucMember(tId,"ProjectObject",20,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->ProjectObject\r\n");  //ptr
		  if(AddStrucMember(tId,"UUIDObject",24,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->UUIDObject\r\n");  //ptr
		  if(AddStrucMember(tId,"Flag1",40,FF_BYTE,-1,2) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->Flag1\r\n");
		  if(AddStrucMember(tId,"TotalObjects",42,FF_BYTE,-1,2) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->TotalObjects\r\n");    //!!!
		  if(AddStrucMember(tId,"CompiledObjects",44,FF_BYTE,-1,2) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->CompiledObjects\r\n");
		  if(AddStrucMember(tId,"ObjectsInUse",46,FF_BYTE,-1,2) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->ObjectsInUse\r\n");
		  if(AddStrucMember(tId,"ObjectsArray",48,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->ObjectsArray\r\n");    //ptr !!!
		  if(AddStrucMember(tId,"IsNull2",52,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->IsNull2\r\n");
		  if(AddStrucMember(tId,"IsNull3",56,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->IsNull3\r\n");
		  if(AddStrucMember(tId,"IsNull4",60,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->IsNull4\r\n");
		  if(AddStrucMember(tId,"ProjectName",64,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->ProjectName\r\n");  //ptr
		  if(AddStrucMember(tId,"CID1",68,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->CID1\r\n");
		  if(AddStrucMember(tId,"CID2",72,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->CID2\r\n");
		  if(AddStrucMember(tId,"IsNull5",76,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->IsNull5\r\n");
		  if(AddStrucMember(tId,"TempVersion",80,FF_BYTE,-1,4) != 0) return ERROR(-4,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->TempVersion\r\n");
	   }
	   tId = AddStrucEx(-1,"mObject",0);
	   if(tId == -1) {
	      return ERROR(-1,"[1]. AddStrucEx(mObject)\r\n");
	   } else {
	     if(AddStrucMember(tId,"ObjectInfo",0,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->ObjectInfo\r\n");
		 if(AddStrucMember(tId,"Reserved",4,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->Reserved\r\n");
		 if(AddStrucMember(tId,"PublicBytes",8,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->PublicBytes\r\n");
		 if(AddStrucMember(tId,"StaticBytes",12,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->StaticBytes\r\n");
		 if(AddStrucMember(tId,"ModulePublic",16,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->ModulePublic\r\n");
		 if(AddStrucMember(tId,"ModuleStatic",20,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->ModuleStatic\r\n");
		 if(AddStrucMember(tId,"ObjectName",24,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->ObjectName\r\n");  //ptr name !!
		 if(AddStrucMember(tId,"MethodCount",28,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->MethodCount\r\n"); 
		 if(AddStrucMember(tId,"MethodNames",32,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->MethodNames\r\n");  //ptr to array of names !!
		 if(AddStrucMember(tId,"StaticVars",36,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->StaticVars\r\n");
		 if(AddStrucMember(tId,"ObjectType",40,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->ObjectType\r\n"); //!!
		 if(AddStrucMember(tId,"IsNull",44,FF_BYTE,-1,4) != 0) return ERROR(-5,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->IsNull\r\n");
	   }
	   tId = AddStrucEx(-1,"mObjectInfo",0);  //VbObjectInfo ta --- 
	   if(tId == -1) {
	      return ERROR(-1,"[1]. AddStrucEx(mObjectInfo)\r\n");
	   } else {
	      if(AddStrucMember(tId,"RefCount",0,FF_BYTE,-1,2) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->RefCount\r\n");
		  if(AddStrucMember(tId,"ObjectIndex",2,FF_BYTE,-1,2) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->ObjectIndex\r\n");
		  if(AddStrucMember(tId,"ObjectTable",4,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->ObjectTable\r\n");  //ptr
		  if(AddStrucMember(tId,"IsNull",8,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->IsNull\r\n");
		  if(AddStrucMember(tId,"ObjectDesc",12,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->ObjectDesc\r\n");  //that one !!!
		  if(AddStrucMember(tId,"Reserved",16,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->Reserved\r\n");
		  if(AddStrucMember(tId,"IsNull1",20,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->IsNull1\r\n");
		  if(AddStrucMember(tId,"ObjectHeader",24,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->ObjectHeader\r\n");  //back ptr
		  if(AddStrucMember(tId,"MemoryProjectData",28,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->MemoryProjectData\r\n");
		  if(AddStrucMember(tId,"MethodCount",32,FF_BYTE,-1,2) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->MethodCount\r\n");  //!!!! Word()
		  if(AddStrucMember(tId,"MethodCount2",34,FF_BYTE,-1,2) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->MethodCount2\r\n");
		  if(AddStrucMember(tId,"MethodsTable",36,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->MethodsTable\r\n"); //ptr !!!!
		  if(AddStrucMember(tId,"ConstantCount",40,FF_BYTE,-1,2) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->ConstantCount\r\n");
		  if(AddStrucMember(tId,"MaxConstantCount",42,FF_BYTE,-1,2) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->MaxConstantCount\r\n");
		  if(AddStrucMember(tId,"IsNull2",44,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->IsNull2\r\n");
		  if(AddStrucMember(tId,"IsNull3",48,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->IsNull3\r\n");
		  if(AddStrucMember(tId,"IsNull4",52,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mObjectInfo->IsNull4\r\n");
	   }
       tId = AddStrucEx(-1,"mProjectTree",0);
       if(tId == -1) {
	      return ERROR(-1,"[1]. AddStrucEx(mProjectTree)\r\n");
	   } else {
	     if(AddStrucMember(tId,"IsNull",0,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->IsNull\r\n");
		 if(AddStrucMember(tId,"ObjectTable",4,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->ObjectTable\r\n");
		 if(AddStrucMember(tId,"Reserved",8,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->Reserved\r\n");
		 if(AddStrucMember(tId,"Unused",12,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->Unused\r\n");
		 if(AddStrucMember(tId,"FormList",16,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->FormList\r\n"); //ptr !!!!
		 if(AddStrucMember(tId,"Unused2",20,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->Unused2\r\n");
		 if(AddStrucMember(tId,"ProjectDesc",24,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->ProjectDesc\r\n");  
		 if(AddStrucMember(tId,"HelpFile",28,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->HelpFile\r\n");
		 if(AddStrucMember(tId,"Reserved2",32,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->Reserved2\r\n");
		 if(AddStrucMember(tId,"HelpIdContext",36,FF_BYTE,-1,4) != 0) return ERROR(-6,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mProjectTree->HelpIdContext\r\n");
	   }
       tId = AddStrucEx(-1,"mPrivFormDesc",0);
	   if(tId == -1) {
	      return ERROR(-1,"[1]. AddStrucEx(mPrivFormDesc)\r\n");
	   } else {
	     // if(AddStrucMember(tId,"ObjectInfo",0,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->ObjectInfo\r\n");
		  if(AddStrucMember(tId,"ObjectGuids",0,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->ObjectGuids\r\n");
		  if(AddStrucMember(tId,"ObjectGuid",4,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->ObjectGuid\r\n");
		  if(AddStrucMember(tId,"IsNull",8,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->IsNull\r\n");
		  if(AddStrucMember(tId,"UuidObjectTypes",12,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mPrivObject->mFormDesc->UuidObjectTypes\r\n");
		  if(AddStrucMember(tId,"ObjectTypeGuids",16,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mPrivObject->mFormDesc->ObjectTypeGuids\r\n");
		  if(AddStrucMember(tId,"Controls2",20,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->Controls2\r\n");
		  if(AddStrucMember(tId,"IsNull1",24,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->IsNull1\r\n");
		  if(AddStrucMember(tId,"ObjectGuid2",28,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->ObjectGuid2\r\n");
		  if(AddStrucMember(tId,"ControlCount",32,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->ControlCount\r\n");
		  if(AddStrucMember(tId,"Controls",36,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->Controls\r\n");
		  if(AddStrucMember(tId,"EventCount",40,FF_BYTE,-1,2) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->EventCount\r\n");   //!!
		  if(AddStrucMember(tId,"PCodeCount",42,FF_BYTE,-1,2) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->PCodeCount\r\n");
		  if(AddStrucMember(tId,"InitializeEventOff",44,FF_BYTE,-1,2) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->InitializeEventOff\r\n"); //!! Offset In Event Table to Initialize Event
	      if(AddStrucMember(tId,"TerminateEventOff",46,FF_BYTE,-1,2) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->TerminateEventOff\r\n");   //!! Offset In Event Table to terminate Event
 	      if(AddStrucMember(tId,"EventsArray",48,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->EventsArray\r\n");  ///!!! ptr 2 events array
	      if(AddStrucMember(tId,"BasicClassObject",52,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->BasicClassObject\r\n");
		  if(AddStrucMember(tId,"IsNull2",56,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->IsNull2\r\n");
		  if(AddStrucMember(tId,"UnUsed",60,FF_BYTE,-1,4) != 0) return ERROR(-7,"[!]. StructureInit->AddStructMember error mThunRTMain->mProjectInfo->mObjectTable->mObject->mPrivFormDesc->UnUsed\r\n");
	   }
	   return 0;
}

static GetThunRtMainStructAddr(void) {
       auto ret;
	   auto seg;
	   auto entry_point;
	   ret = 0xFFFFFFFF;
	   entry_point = GetEntryPoint(GetEntryOrdinal(0));  //fixme: multiple entry points (get correct)
	   if(entry_point != -1) {
	      auto f_name;
		  f_name = GetOpnd(entry_point + ItemSize(entry_point),0);
		  if(f_name == "ThunRTMain") {
			 ret = GetOperandValue(entry_point,0);  //fixme: (Optimizing compillers) MOV [ESP+n],val !push val
		  }
	   }
	   if(ret == -1) {
	      ret = AskAddr(0xBADC0DEE,"[?]. Put ThunRTMain structrue addres !\r\n");
	   }
       if((seg = SegName(ret)) != "") {
		   Message("[+]. Assuming ThunRTMainStructure addr : %s:0x%08x\r\n",seg,ret);
		   MakeUnknown(ret,GetStrucSize(GetStrucIdByName("mThunRTMain")),0);	  
	   } else {
	       return 0xFFFFFFFF;
	   }
	   return ret;
}

#ifndef NO_MAIN

static main() {
       auto mId,ret;
	   auto proc_addr;
	   auto sub_main;
	   auto tRtMainStruct;
	   auto first_proc;
	   auto obj_name;
	   Message("\r\n");
	   Message("+---------------------------------------+\r\n");
	   Message("| VBSdump v 1.1                         |\r\n");
	   Message("| Marcin Ressel (echo)                  |\r\n");
	   Message("| ... is so so uggly oO ...             |\r\n");
	   Message("+---------------------------------------+\r\n");
	   Message("\r\n");
       if((ret = StructuresInit(mId)) != 0) {
	      return CLEAR(-1,"[!]. StructureInit error !\r\n");  
	   }
	   tRtMainStruct = GetThunRtMainStructAddr();
	   if(tRtMainStruct == 0xFFFFFFFF) return CLEAR(-1,"[!]. GetThunRtMainStructAddr() error [Bad Address] !\r\n");
	   else {
	         if(MakeStructEx(tRtMainStruct,-1,"mThunRTMain") == 0) return CLEAR(-1,"[!]. MakeStructEx(mThunRTMain) error !\r\n");   //niedziala
			 else {
			       auto sValue,FormCnt;
				   sValue = tRtMainStruct + 100;
				   if(Dword(sValue) != 0xFFFFFFFF) {
			          Message("[+]. Project Name : %s\r\n",GetString(tRtMainStruct + Dword(sValue),-1,GetStringType(tRtMainStruct + Dword(sValue))));
				   }
				   sValue = tRtMainStruct + 92;
				   if(Dword(sValue) != 0xFFFFFFFF) {
				      Message("[+]. Project Title : %s\r\n",GetString(tRtMainStruct + Dword(sValue),-1,GetStringType(tRtMainStruct + Dword(sValue))));
				   }
				   sValue = tRtMainStruct + 88; //oProjectExename
				   if(Dword(sValue) != 0xFFFFFFFF) {
				      Message("[+]. Project Exe Name : %s\r\n",GetString(tRtMainStruct + Dword(sValue),-1,GetStringType(tRtMainStruct + Dword(sValue))));
				   }
				   sValue = tRtMainStruct + 68; //formCount
				   if(Word(sValue) != 0xFFFF) {
				      FormCnt = Word(sValue);
				      Message("[+]. Number of forms : %u\r\n",Word(sValue));
				   }
				   sValue = tRtMainStruct + 36;
				   if(Dword(sValue) != 0xFFFFFFFF) {
				      Message("[+]. Language ID : dec(%d) hex(0x%08x)\r\n",Dword(sValue),Dword(sValue));
				   }
				   sValue = tRtMainStruct + 20;
				   if(Dword(sValue) != 0xFFFFFFFF) {
					  Message("[+]. Backup language ID : dec(%d) hex(0x%08x)\r\n",Dword(sValue),Dword(sValue));
				   }
				   sValue = tRtMainStruct + 44; //subMain
				   if(Dword(sValue) != 0xFFFFFFFF){
				      Message("[+].   Main (VBheadr->subMain) proc ptr : 0x%08x\r\n",Dword(sValue));
					  if(Dword(sValue) != 0x00000000) {
					     sub_main = Dword(sValue);
					     MakeNameEx(Dword(sValue),"e_VbMain",SN_PUBLIC);
						 MakeFunction(Dword(sValue),0x00000000);
						 AddEntryPoint(Dword(sValue),Dword(sValue),"e_VbMain",1);
					     Message("[+].   Main (VBheadr->subMain) renamed to e_VbMain\r\n");
					  }
				   } 
				   sValue = tRtMainStruct + 48; //projectInfo
				   if(Dword(sValue) != 0xFFFFFFFF){
				      auto ProjectInfo;
					  ProjectInfo = Dword(sValue);
					  MakeUnknown(ProjectInfo,GetStrucSize(GetStrucIdByName("mProjectInfo")),0);	
				      if(MakeStructEx(ProjectInfo,-1,"mProjectInfo") == 0) return CLEAR(-1,"[!].   MakeStructEx(mProjectInfo) error !\r\n");
					  else {
					        auto ObjectTable;
				            Message("[+].    Project info structure ptr : 0x%08x (structure dumping !)\r\n",Dword(sValue));
					        Message("[*]. ******************************************** \r\n");
					        Message("[*].     VBHeader::ProjectInfo [0x%08x]\r\n",Dword(sValue));
							sValue = ProjectInfo + 4;  //ObjectTable
							ObjectTable = Dword(sValue);
							Message("[+].     ObjectTable : 0x%08x\r\n",ObjectTable);
							sValue = ProjectInfo + 32; //nativeCode
							Message("[+].     NativeCode : 0x%08x\r\n",Dword(sValue));
							sValue = ProjectInfo + 28; //vSeh
							if(Dword(sValue) != 0xFFFFFFFF) {
							   Message("[+].     VbSeh : 0x%08x\r\n",Dword(sValue));
							}
							sValue = ProjectInfo + 20; //dataSize 
							Message("[+].     DataSize : dec(%d) hex(%x)\r\n",Dword(sValue),Dword(sValue));
							sValue = ProjectInfo + 564; //IIAT
							Message("[+].     Iat : 0x%08x\r\n",Dword(sValue));   //should we dump ? 
							sValue = ProjectInfo + 568; //iat size
							Message("[+].     Iat Numbers : dec(%d) hex(%x)\r\n",Dword(sValue),Dword(sValue));
							sValue = ProjectInfo + 36; //pathInfo
			                Message("[+].     PathInfo : %x\r\n",GetString(sValue,-1,GetStringType(sValue)));
							Message("[+].      ObjectTable structure ptr : 0x%08x (structure dumping !)\r\n",ObjectTable);
							Message("[*]. ******************************************** \r\n");
							Message("[*].       VBHeader::ProjectInfo::ObjectTable [0x%08x]\r\n",ObjectTable);
							MakeUnknown(ObjectTable,GetStrucSize(GetStrucIdByName("mObjectTable")),0);	
							if(MakeStructEx(ObjectTable,-1,"mObjectTable") == 0) return CLEAR(-1,"[!].   MakeStructEx(mObjectTable) error !\r\n");
							else {
							     auto i,max,ObjectInfo2,PrivDesc;
							     auto ObjectsArray,cObjectItem,methodsTable;
							     sValue = ObjectTable + 64; //ProjectName
								 if(Dword(sValue) != 0xFFFFFFFF) {
						            Message("[+].        ObjectTable.ProjectName : %s\r\n",GetString(Dword(sValue),-1,GetStringType(Dword(sValue))));
								 }
								 sValue = ObjectTable + 48; //ObjectsArray ptr
								 ObjectsArray = Dword(sValue);
								 Message("[+].         ObjectTable.ObjectsArray ptr : 0x%08x (structure dumping !)\r\n",Dword(sValue));
								 Message("[*]. ******************************************** \r\n");
								 Message("[*].          VBHeader::ProjectInfo::ObjectTable::ObjectsArray  [0x%08x]\r\n",ObjectsArray);
								 max = Word(ObjectTable + 42);
								 for(i=0;i<max;i=i+1) {
								     cObjectItem = ObjectsArray + (i * GetStrucSize(GetStrucIdByName("mObject")));  //mObject
									 MakeUnknown(cObjectItem,GetStrucSize(GetStrucIdByName("mObject")),0);	
									 if(MakeStructEx(cObjectItem,-1,"mObject") == 0) return CLEAR(-1,"[!].  MakeStructEx(mObject) error !\r\n");
								     Message("[+].           (%d). Object [0x%08x]\r\n",i,cObjectItem);
									 sValue = cObjectItem + 40; //ObjectType
									 Message("[+].                 Object Type : dec(%d) hex(%x)\r\n",Dword(sValue),Dword(sValue));
									 sValue = cObjectItem + 24; //ObjectName ptr
									 obj_name = sValue;
									 Message("[+].                 Object Name : %s\r\n",GetString(Dword(sValue),-1,GetStringType(Dword(sValue))));   
									 
								     ObjectInfo2 = Dword(cObjectItem); //ObjectInfo
									 MakeUnknown(ObjectInfo2,GetStrucSize(GetStrucIdByName("mObjectInfo")),0);	
									 if(MakeStructEx(ObjectInfo2,-1,"mObjectInfo") == 0) return CLEAR(-1,"[!].  MakeStructEx(mObjectInfo) error !\r\n");
									 Message("[+].                  ObjectTable.ObjectsArray[%d].Object.ObjectInfo : 0x%08x (structure dumping !)\r\n",i,ObjectInfo2);
									 Message("[*].                  ********************************************** \r\n");
									 Message("[*].                  VBHeader::ProjectInfo::ObjectTable::ObjectsArray[%d]::Object::ObjectInfo  [0x%08x]\r\n",i,ObjectInfo2);
									 sValue = ObjectInfo2 + 32;
									 Message("[+].                    Methods count : %d\r\n",Word(sValue));
									 if(Word(sValue) > 0) {
                                        sValue = ObjectInfo2 + 36;
									    methodsTable = Dword(sValue);
									    Message("[+].                    Methods table : 0x%08x\r\n",methodsTable);
										
									 }
									 PrivDesc = ObjectInfo2 + 52 + 4;
									 if(Dword(ObjectInfo2 + 52) != PrivDesc) {   //PrivDesc has all what we need
									    MakeUnknown(PrivDesc,GetStrucSize(GetStrucIdByName("mPrivFormDesc")),0);	
									    if(MakeStructEx(PrivDesc,-1,"mPrivFormDesc") == 0) return CLEAR(-1,"[!].  MakeStructEx(mPrivFormDesc) error !\r\n");
										else  {
										     auto k;
											 auto p_name;
									         Message("[+].                    Priv Descriptor : 0x%08x\r\n",PrivDesc);
											 sValue = PrivDesc + 40;
											 Message("[+].                    Events Number : dec(%d) hex(%x)\r\n",Word(sValue),Word(sValue));
											 if(Word(sValue) > 0) {
                                                auto evArray;
											    sValue = PrivDesc + 48; //events array
										        Message("[+].                    Events Array : 0x%08x\r\n",Dword(sValue));
												for(k=0;k<Word(PrivDesc + 40); k=k+1) {
												    p_name = "";
												    evArray = Dword(sValue) + (k * 4);
												    if((i == 0) && (k == 0)) { //first
												       p_name = "First";
													   first_proc = Dword(evArray) + 5 + Dword(Dword(evArray) + 1);
													}
													if(Word(evArray - 2)  != 0xffff) { //e
													   p_name = p_name + "Event";
													} else { //m
													   p_name = p_name + "Method";
													}
													p_name = p_name  + ltoa(k,10) + GetString(Dword(obj_name),-1,GetStringType(Dword(obj_name))) + "Object";
													proc_addr = Dword(evArray) + 5 + Dword(Dword(evArray) + 1);
													MakeNameEx(proc_addr,"Form"+ltoa(i,10)+"_"+ltoa(k,10)+"_"+p_name+"Proc",SN_PUBLIC);
													AddEntryPoint(proc_addr,proc_addr,"Form"+ltoa(i,10)+"_"+ltoa(k,10)+"_"+p_name+"Proc",1);
						                            MakeFunction(proc_addr,0x00000000);
													Message("[*].                    Found proc %s at 0x%08x\r\n",p_name,proc_addr);
												}
											 }
										}
									 }
									 Message("[*].                  ********************************************** \r\n");
								 }
							}
					  }
				   } 
				   //...
			 }
	   }
	   Message("[+]. SubMain Proc : 0x%08x\r\n",sub_main);
	   Message("[+]. First Proc   : 0x%08x\r\n",first_proc);
	   Message("[+]. Now you can press [ctrl + e] or [ctrl + F12] and play your game \r\n");
	   CLEAR(0,"[+]. Done !\r\n");
}

#endif
