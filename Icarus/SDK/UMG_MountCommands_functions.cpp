#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MountCommands.UMG_MountCommands_C
// (None)

class UClass* UUMG_MountCommands_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MountCommands_C");

	return Clss;
}


// UMG_MountCommands_C UMG_MountCommands.Default__UMG_MountCommands_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MountCommands_C* UUMG_MountCommands_C::GetDefaultObj()
{
	static class UUMG_MountCommands_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MountCommands_C*>(UUMG_MountCommands_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MountCommands.UMG_MountCommands_C.Toggled_FollowStay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountCommands_C::Toggled_FollowStay(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountCommands_C", "Toggled_FollowStay");

	Params::UUMG_MountCommands_C_Toggled_FollowStay_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountCommands.UMG_MountCommands_C.Toggled_PassiveAggressive
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ToggleButtonBase_C*     ToggleButton                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountCommands_C::Toggled_PassiveAggressive(class UUMG_ToggleButtonBase_C* ToggleButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountCommands_C", "Toggled_PassiveAggressive");

	Params::UUMG_MountCommands_C_Toggled_PassiveAggressive_Params Parms{};

	Parms.ToggleButton = ToggleButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountCommands.UMG_MountCommands_C.SetLinkedActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountCommands_C::SetLinkedActor(class AActor* LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountCommands_C", "SetLinkedActor");

	Params::UUMG_MountCommands_C_SetLinkedActor_Params Parms{};

	Parms.LinkedActor = LinkedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_MountCommands.UMG_MountCommands_C.ExecuteUbergraph_UMG_MountCommands
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountMovementBehaviourStateTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EMountCombatBehaviourStateTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_CustomEvent_ToggleButton_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ToggleButtonBase_C*     K2Node_CustomEvent_ToggleButton                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMountCombatBehaviourStateK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusMountCharacter*       K2Node_DynamicCast_AsIcarus_Mount_Character_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBP_MountInterface_C>K2Node_DynamicCast_AsBP_Mount_Interface                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBP_MountInterface_C>K2Node_DynamicCast_AsBP_Mount_Interface_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMountMovementBehaviourStateCallFunc_GetMountMovementBehaviour_MovementBehaviour             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EMountCombatBehaviourStateCallFunc_GetMountCombatBehaviour_CombatBehaviour                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesMountSupportCombatState_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMountMovementBehaviourStateK2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LinkedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MountCommands_C::ExecuteUbergraph_UMG_MountCommands(int32 EntryPoint, enum class EMountMovementBehaviourState Temp_byte_Variable, enum class EMountMovementBehaviourState Temp_byte_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EMountCombatBehaviourState Temp_byte_Variable_2, enum class EMountCombatBehaviourState Temp_byte_Variable_3, class UUMG_ToggleButtonBase_C* K2Node_CustomEvent_ToggleButton_1, class UUMG_ToggleButtonBase_C* K2Node_CustomEvent_ToggleButton, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character_1, bool K2Node_DynamicCast_bSuccess_1, enum class EMountCombatBehaviourState K2Node_Select_Default, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character_2, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class IBP_MountInterface_C> K2Node_DynamicCast_AsBP_Mount_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBP_MountInterface_C> K2Node_DynamicCast_AsBP_Mount_Interface_1, bool K2Node_DynamicCast_bSuccess_4, enum class EMountMovementBehaviourState CallFunc_GetMountMovementBehaviour_MovementBehaviour, enum class EMountCombatBehaviourState CallFunc_GetMountCombatBehaviour_CombatBehaviour, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_DoesMountSupportCombatState_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue_1, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component_1, bool K2Node_DynamicCast_bSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_1, bool Temp_bool_Variable_1, enum class EMountMovementBehaviourState K2Node_Select_Default_1, class AActor* K2Node_CustomEvent_LinkedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MountCommands_C", "ExecuteUbergraph_UMG_MountCommands");

	Params::UUMG_MountCommands_C_ExecuteUbergraph_UMG_MountCommands_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_ToggleButton_1 = K2Node_CustomEvent_ToggleButton_1;
	Parms.K2Node_CustomEvent_ToggleButton = K2Node_CustomEvent_ToggleButton;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character = K2Node_DynamicCast_AsIcarus_Mount_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character_1 = K2Node_DynamicCast_AsIcarus_Mount_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsIcarus_Mount_Character_2 = K2Node_DynamicCast_AsIcarus_Mount_Character_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsBP_Mount_Interface = K2Node_DynamicCast_AsBP_Mount_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsBP_Mount_Interface_1 = K2Node_DynamicCast_AsBP_Mount_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetMountMovementBehaviour_MovementBehaviour = CallFunc_GetMountMovementBehaviour_MovementBehaviour;
	Parms.CallFunc_GetMountCombatBehaviour_CombatBehaviour = CallFunc_GetMountCombatBehaviour_CombatBehaviour;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_DoesMountSupportCombatState_ReturnValue = CallFunc_DoesMountSupportCombatState_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetIcarusPlayerController_IsValid_1 = CallFunc_GetIcarusPlayerController_IsValid_1;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue_1 = CallFunc_GetIcarusPlayerController_ReturnValue_1;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue_1 = CallFunc_GetNetworkProxyComponent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component_1 = K2Node_DynamicCast_AsBP_Network_Proxy_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CustomEvent_LinkedActor = K2Node_CustomEvent_LinkedActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


