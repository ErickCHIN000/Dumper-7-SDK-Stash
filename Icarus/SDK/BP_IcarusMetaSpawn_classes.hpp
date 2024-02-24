#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x318 - 0x2C0)
// BlueprintGeneratedClass BP_IcarusMetaSpawn.BP_IcarusMetaSpawn_C
class ABP_IcarusMetaSpawn_C : public AMetaSpawnActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  MetaNode;                                          // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  PreviewMeta;                                       // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FMetaResourceNodesRowHandle           Meta_Node_Handle;                                  // 0x2E0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FExoticSpawnEnum                      Spawn_Identifier;                                  // 0x2F8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowMeshPreview;                                   // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1756[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Group;                                             // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  LocatorMesh;                                       // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IcarusMetaSpawn_C* GetDefaultObj();

	void HideEditorLocator(bool CallFunc_IsValid_ReturnValue);
	void ShowEditorLocator(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue);
	void CheckRowHandles(bool ProblemFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_IcarusMetaSpawn_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ABP_IcarusMetaSpawn_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_FMetaResourceNodesRowHandleFMetaResourceNodesRowHandle_ReturnValue);
	void TogglePreview(bool CallFunc_Not_PreBool_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsWithEditor_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FMetaResourceNodeInfo& CallFunc_GetMetaResourceNodesStruct_MetaResourceNodes, enum class EValid CallFunc_GetMetaResourceNodesStruct_Paths, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, TSubclassOf<class UObject> CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsResource_Deposit, bool K2Node_ClassDynamicCast_bSuccess);
	void OnLoaded_51F87C0E46A04C7697E3B98B88978D42(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void Spawn(int32 MetaAmount);
	void ExecuteUbergraph_BP_IcarusMetaSpawn(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, const class FString& CallFunc_GetDisplayName_ReturnValue, class UClass* Temp_class_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsResource_Deposit, bool K2Node_ClassDynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_CustomEvent_MetaAmount, const struct FMetaResourceNodeInfo& CallFunc_GetMetaResourceNodesStruct_MetaResourceNodes, enum class EValid CallFunc_GetMetaResourceNodesStruct_Paths, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsWithEditor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AResourceDeposit* CallFunc_FinishSpawningActor_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


