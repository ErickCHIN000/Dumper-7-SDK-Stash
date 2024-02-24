#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12 (0xA3A - 0xA28)
// BlueprintGeneratedClass BP_Structure_Functional_Container.BP_Structure_Functional_Container_C
class ABP_Structure_Functional_Container_C : public ABP_Structure_Constructed_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UInWorldItemContainerComponent*        InWorldItemContainer;                              // 0xA30(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsContainerOpen;                                  // 0xA38(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	bool                                         bCachedClientIsContainerOpen;                      // 0xA39(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Structure_Functional_Container_C* GetDefaultObj();

	TScriptInterface<class IItemContainer> GetContainerFromProvider(struct FItemContainerHandle& ContainerHandle, bool CallFunc_HasContainerFromHandle_ReturnValue);
	TScriptInterface<class IItemContainer> GetDefaultContainer();
	bool HasContainer(TScriptInterface<class IItemContainer>& Container, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_HasContainerFromHandle_ReturnValue);
	bool HasContainerFromHandle(struct FItemContainerHandle& ContainerHandle, TScriptInterface<class IItemContainer> CallFunc_GetContainerHandle_self_CastInput, const struct FItemContainerHandle& CallFunc_GetContainerHandle_ReturnValue, bool CallFunc_EqualEqual_FItemContainerHandleFItemContainerHandle_ReturnValue);
	void OnRep_bIsContainerOpen(bool Temp_bool_Variable, enum class EStructureFXActivationTime Temp_byte_Variable, enum class EStructureFXActivationTime Temp_byte_Variable_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class EStructureFXActivationTime K2Node_Select_Default);
	void GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface);
	void ReceiveBeginPlay();
	void PopulateChest(TArray<struct FInventoryEntry>& ItemRewards);
	void InitializeContainer(class UObject* Structure);
	void ServerOnly_OnContainerOpenStateChanged(bool bIsContainerOpen);
	void InitializePersistence(enum class E_WorldPersistenceLoadState LoadState);
	void ExecuteUbergraph_BP_Structure_Functional_Container(int32 EntryPoint, enum class E_WorldPersistenceLoadState K2Node_CustomEvent_LoadState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FInventoryEntry>& K2Node_Event_ItemRewards, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetItemName_ReturnValue, int32 CallFunc_AddItem_Amount, TArray<struct FGuid>& CallFunc_AddItem_ModifiedInstances, bool CallFunc_AddItem_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UObject* K2Node_CustomEvent_Structure, bool CallFunc_GetItemContainerData_IsValid, class UStructureItemContainerData* CallFunc_GetItemContainerData_OutItemContainerData, bool K2Node_Event_bIsContainerOpen, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ANWXGameModeBase* CallFunc_GetNWXGameModeBase_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


