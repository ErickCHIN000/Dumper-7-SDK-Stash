#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x338 - 0x220)
// BlueprintGeneratedClass ba_NoteSpawnerComponentForInvestigationBoard.ba_NoteSpawnerComponentForInvestigationBoard_C
class Aba_NoteSpawnerComponentForInvestigationBoard_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UPointLightComponent*                  PointLight;                                        // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  GhostMesh;                                         // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Position_C18FBBB84FA34A9B53CA51A5FF5ED1E1;   // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Light_Intensity_C18FBBB84FA34A9B53CA51A5FF5ED1E1;  // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Light__Direction_C18FBBB84FA34A9B53CA51A5FF5ED1E1; // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_1220[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Light;                                             // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   NoteID;                                            // 0x250(0x10)(Edit, BlueprintVisible, NoDestructor)
	class Aba_col_CollectableNote_01_C*          SpawnedNote;                                       // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCrucial;                                         // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         WasSpawned;                                        // 0x269(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1233[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_NoteSpawnerComponentForInvestigationBoard_C* Prerequisite_note_picker;                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FDataTableRowHandle>           RequiredNotes;                                     // 0x278(0x10)(Edit, BlueprintVisible)
	int32                                        MinRequiredNotes;                                  // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_123E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstance*                     RealMaterial;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Introduction_ended;                                // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_FloatingNoteDescription_C*        SpawnedWidget;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Up;                                                // 0x2B0(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   Down;                                              // 0x2C0(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   Left;                                              // 0x2D0(0x10)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                   Right;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, NoDestructor)
	class UWid_InvestigationBoard_Entry_C*       Widget;                                            // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Aba_col_CollectableNote_01_C*          Note;                                              // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CustomPreviewRotation;                             // 0x300(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Is3D;                                              // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_126D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Desc;                                              // 0x310(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            Spawned;                                           // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Aba_NoteSpawnerComponentForInvestigationBoard_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void SetNote(class FName NewNote, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class Aba_col_CollectableNote_01_C* K2Node_DynamicCast_AsBa_Col_Collectable_Note_01, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	bool CheckIfRequirementsAreMet(TArray<class FName>& CallFunc_GetNamesFromRowHandles_OutputNames, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_ArrayIntersectionFName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void Spawn(bool* IsCrucial, bool* WasSpawned, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_GetNamesFromRowHandles_OutputNames, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& CallFunc_ArrayIntersectionFName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void UserConstructionScript(const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetStaticMesh_ReturnValue_1);
	void Light__FinishedFunc();
	void Light__UpdateFunc();
	void Light__StartSound__EventFunc();
	void Light__Spawn__EventFunc();
	void LoadingFinished();
	void PrepareDataForSave();
	void Introduce();
	void Pause();
	void Unpause();
	void ExecuteUbergraph_ba_NoteSpawnerComponentForInvestigationBoard(int32 EntryPoint, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Spawn_IsCrucial, bool CallFunc_Spawn_WasSpawned, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_FloatingNoteDescription_C* CallFunc_Create_ReturnValue, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess, class USoundWave* K2Node_DynamicCast_AsSound_Wave, bool K2Node_DynamicCast_bSuccess_1, TArray<struct FSubtitleCueBP>& CallFunc_GetSubtitlesFromSoundWave_OutSubtitleCues, const struct FSubtitleCueBP& CallFunc_Array_Get_Item, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UUserWidget* CallFunc_Play_Sound_At_Location_With_Subtitles_SubtitleRef, class UAudioComponent* CallFunc_Play_Sound_At_Location_With_Subtitles_SoundRef, float CallFunc_Play_Sound_At_Location_With_Subtitles_Duration);
	void Spawned__DelegateSignature();
	void Introduction_ended__DelegateSignature();
};

}


