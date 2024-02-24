#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x5D0 - 0x5C8)
// BlueprintGeneratedClass BP_MasterBuildableItemClass.BP_MasterBuildableItemClass_C
class ABP_MasterBuildableItemClass_C : public ABP_StaticMeshClass_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_MasterBuildableItemClass_C* GetDefaultObj();

	void OnExecuteInteract(class AActor* InteractingActor, int32 OptionIndex);
	void ExecuteUbergraph_BP_MasterBuildableItemClass(int32 EntryPoint, class AActor* K2Node_Event_InteractingActor, int32 K2Node_Event_OptionIndex, bool K2Node_SwitchInteger_CmpSuccess, TScriptInterface<class IBP_JigCharacterInterface_C> K2Node_DynamicCast_AsBP_Jig_Character_Interface, bool K2Node_DynamicCast_bSuccess, class UBuildingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_OnPickupInteractExecuted_Result, TScriptInterface<class IBPI_Player_C> K2Node_DynamicCast_AsBPI_Player, bool K2Node_DynamicCast_bSuccess_1);
};

}


