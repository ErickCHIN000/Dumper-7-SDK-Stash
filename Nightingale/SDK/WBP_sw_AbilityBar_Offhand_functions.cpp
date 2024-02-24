#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C
// (None)

class UClass* UWBP_sw_AbilityBar_Offhand_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_AbilityBar_Offhand_C");

	return Clss;
}


// WBP_sw_AbilityBar_Offhand_C WBP_sw_AbilityBar_Offhand.Default__WBP_sw_AbilityBar_Offhand_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_AbilityBar_Offhand_C* UWBP_sw_AbilityBar_Offhand_C::GetDefaultObj()
{
	static class UWBP_sw_AbilityBar_Offhand_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_AbilityBar_Offhand_C*>(UWBP_sw_AbilityBar_Offhand_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C.SetupCosmeticsForOffhandAbilityBar
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_AbilityBar_Offhand_C::SetupCosmeticsForOffhandAbilityBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_AbilityBar_Offhand_C", "SetupCosmeticsForOffhandAbilityBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C.OnItemDataInitialized
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_EquippableItemBase_C*    Equippable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_AbilityBar_Offhand_C::OnItemDataInitialized(class ABP_EquippableItemBase_C* Equippable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_AbilityBar_Offhand_C", "OnItemDataInitialized");

	Params::UWBP_sw_AbilityBar_Offhand_C_OnItemDataInitialized_Params Parms{};

	Parms.Equippable = Equippable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C.SetupLoadoutEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEquippableItem*             Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInputAction*                K2Node_DynamicCast_AsInput_Action                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadoutReadInterface>K2Node_DynamicCast_AsLoadout_Read_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             CallFunc_GetItemInLoadoutSlot_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadoutComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_AbilityBar_Offhand_C::SetupLoadoutEvent(class AEquippableItem* Temp_object_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UInputAction* K2Node_DynamicCast_AsInput_Action, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class AEquippableItem* CallFunc_GetItemInLoadoutSlot_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_AbilityBar_Offhand_C", "SetupLoadoutEvent");

	Params::UWBP_sw_AbilityBar_Offhand_C_SetupLoadoutEvent_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsInput_Action = K2Node_DynamicCast_AsInput_Action;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsLoadout_Read_Interface = K2Node_DynamicCast_AsLoadout_Read_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetItemInLoadoutSlot_ReturnValue = CallFunc_GetItemInLoadoutSlot_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C.OnLoadoutSlotChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        SlotType                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEquippableItem*             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_EquippableItemBase_C*    K2Node_DynamicCast_AsBP_Equippable_Item_Base                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_AbilityBar_Offhand_C::OnLoadoutSlotChanged(enum class ELoadoutSlotType SlotType, class AEquippableItem* Item, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_AbilityBar_Offhand_C", "OnLoadoutSlotChanged");

	Params::UWBP_sw_AbilityBar_Offhand_C_OnLoadoutSlotChanged_Params Parms{};

	Parms.SlotType = SlotType;
	Parms.Item = Item;
	Parms.K2Node_DynamicCast_AsBP_Equippable_Item_Base = K2Node_DynamicCast_AsBP_Equippable_Item_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_AbilityBar_Offhand_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_AbilityBar_Offhand_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_AbilityBar_Offhand.WBP_sw_AbilityBar_Offhand_C.ExecuteUbergraph_WBP_sw_AbilityBar_Offhand
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_LoadoutComponent_C*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInitialized_bInitialized                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_AbilityBar_Offhand_C::ExecuteUbergraph_WBP_sw_AbilityBar_Offhand(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UBP_LoadoutComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsInitialized_bInitialized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_AbilityBar_Offhand_C", "ExecuteUbergraph_WBP_sw_AbilityBar_Offhand");

	Params::UWBP_sw_AbilityBar_Offhand_C_ExecuteUbergraph_WBP_sw_AbilityBar_Offhand_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsInitialized_bInitialized = CallFunc_IsInitialized_bInitialized;

	UObject::ProcessEvent(Func, &Parms);

}

}


