#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25C (0x9D0 - 0x774)
// BlueprintGeneratedClass BP_ProcessorBase.BP_ProcessorBase_C
class ABP_ProcessorBase_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_1D3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioOcclusionComponent*              AudioOcclusionComponent;                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       InputOverflow;                                     // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FItemData                             ProcessingItem;                                    // 0x798(0x1F0)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, ContainsInstancedReference)
	class UClass*                                WidgetClassToOpen;                                 // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UpdateOutputItem;                                  // 0x990(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasEnergyComponent;                                // 0x9A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            Processor_Inventory;                               // 0x9A8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInventory*                            FuelInventory;                                     // 0x9B0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProcessingComponent*                  Processing;                                        // 0x9B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DisplayPreviewMesh;                                // 0x9C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DisplayRecipeMesh;                                 // 0x9C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PreviewSkeletal;                                   // 0x9C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1D5B[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGeneratorComponent*                   Generator;                                         // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ProcessorBase_C* GetDefaultObj();

	void PlayCraftedItemSound(const struct FProcessingItem& Item, const struct FCraftingAudioData& Data, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, float CallFunc_Conv_IntToFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FCraftingAudioData& CallFunc_GetCraftingAudioDataStruct_CraftingAudioData, enum class EValid CallFunc_GetCraftingAudioDataStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UFMODEvent> Temp_wildcard_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UFMODEvent* K2Node_DynamicCast_AsFMODEvent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, enum class EItemCraftingTypeFMODParam Temp_byte_Variable, enum class EValid CallFunc_CastToProcessingRowHandle_Paths, const struct FProcessingRowHandle& CallFunc_CastToProcessingRowHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EItemCraftingTypeFMODParam Temp_byte_Variable_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, enum class EItemCraftingTypeFMODParam K2Node_Select_Default, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, TSoftObjectPtr<class UFMODEvent> CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void OnProcessingCompleted(const struct FProcessingItem& Item);
	void Deployable_Interact(class AActor* Interactor);
	void ActivateAutoCraft(class UInventory* Inventory, int32 Location);
	void ProcessingItemChanged();
	void OnProcessingObjectChanged(const struct FProcessingItem& New_Object, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FCraftingOutput& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void OnProcessingStopped(enum class EProcessorStoppedReason Reason, const class FString& Reasoning, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void OnServer_Interact(class AActor* Instigator, class AIcarusPlayerCharacterSurvival* K2Node_DynamicCast_AsIcarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1, enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, const struct FProcessingData& CallFunc_GetProcessingData_OutData, bool CallFunc_GetProcessingData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void OnRep_ProcessingItem();
	void ReceiveBeginPlay();
	void Multi_OnCraftedItem(const struct FProcessingItem& Item);
	void ExecuteUbergraph_BP_ProcessorBase(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsServer_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UProcessingComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetTrait_Paths_1, class UGeneratorComponent* CallFunc_GetTrait_ReturnValue_1, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UInventory*>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FProcessingItem& K2Node_CustomEvent_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FProcessingData& CallFunc_GetProcessingData_OutData, bool CallFunc_GetProcessingData_ReturnValue);
	void UpdateOutputItem__DelegateSignature();
};

}


