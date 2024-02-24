#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2A9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_MountCommands.UMG_MountCommands_C
class UUMG_MountCommands_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_ToggleButton_IconSwap_C*          AggressivePassive;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_IconSwap_C*          FollowStay;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ToggleButton_IconSwap_C*          StandSit;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Titlebar_C*                       UMG_TitlebarCommands;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_Cargo;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryIDEnum                      Inventory_ID;                                      // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         HideTakeAllButton;                                 // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_MountCommands_C* GetDefaultObj();

	void Toggled_FollowStay(class UUMG_ToggleButtonBase_C* ToggleButton);
	void Toggled_PassiveAggressive(class UUMG_ToggleButtonBase_C* ToggleButton);
	void SetLinkedActor(class AActor* LinkedActor);
	void ExecuteUbergraph_UMG_MountCommands(int32 EntryPoint, enum class EMountMovementBehaviourState Temp_byte_Variable, enum class EMountMovementBehaviourState Temp_byte_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMountCombatBehaviourState Temp_byte_Variable_2, enum class EMountCombatBehaviourState Temp_byte_Variable_3, class UUMG_ToggleButtonBase_C* K2Node_CustomEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_CustomEvent_ToggleButton, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character_1, bool K2Node_DynamicCast_bSuccess_1, enum class EMountCombatBehaviourState K2Node_Select_Default, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IBP_MountInterface_C> K2Node_DynamicCast_AsBP_Mount_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_MountInterface_C> K2Node_DynamicCast_AsBP_Mount_Interface_1, bool K2Node_DynamicCast_bSuccess_4, enum class EMountMovementBehaviourState CallFunc_GetMountMovementBehaviour_MovementBehaviour, enum class EMountCombatBehaviourState CallFunc_GetMountCombatBehaviour_CombatBehaviour, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_DoesMountSupportCombatState_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1, bool K2Node_DynamicCast_bSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_1, enum class EMountMovementBehaviourState K2Node_Select_Default_1, class AActor* K2Node_CustomEvent_LinkedActor);
};

}


