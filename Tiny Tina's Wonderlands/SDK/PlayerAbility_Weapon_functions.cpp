#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerAbility_Weapon.PlayerAbility_Weapon_C
// (None)

class UClass* UPlayerAbility_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAbility_Weapon_C");

	return Clss;
}


// PlayerAbility_Weapon_C PlayerAbility_Weapon.Default__PlayerAbility_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerAbility_Weapon_C* UPlayerAbility_Weapon_C::GetDefaultObj()
{
	static class UPlayerAbility_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerAbility_Weapon_C*>(UPlayerAbility_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.QuickSelectWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventorySlotData*          InvSlot                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponSlotData*             WeaponSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetEquippedInventoryForSlot_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_DynamicCast_AsWeapon                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerAbility_Weapon_C::QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot, class AActor* CallFunc_GetEquippedInventoryForSlot_ReturnValue, class AWeapon* K2Node_DynamicCast_AsWeapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "QuickSelectWeapon");

	Params::UPlayerAbility_Weapon_C_QuickSelectWeapon_Params Parms{};

	Parms.InvSlot = InvSlot;
	Parms.WeaponSlot = WeaponSlot;
	Parms.CallFunc_GetEquippedInventoryForSlot_ReturnValue = CallFunc_GetEquippedInventoryForSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsWeapon = K2Node_DynamicCast_AsWeapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_27
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_27(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_27");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_27_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_26
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_26(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_26");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_fire_K2Node_GbxInputActionEvent_Discrete_26_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_25
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_25(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_25");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_25_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_24
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_24(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_24");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_zoom_K2Node_GbxInputActionEvent_Discrete_24_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_reload_K2Node_GbxInputActionEvent_Discrete_23
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_reload_K2Node_GbxInputActionEvent_Discrete_23(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_reload_K2Node_GbxInputActionEvent_Discrete_23");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_reload_K2Node_GbxInputActionEvent_Discrete_23_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_drop_weapon_K2Node_GbxInputActionEvent_Discrete_22
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_drop_weapon_K2Node_GbxInputActionEvent_Discrete_22(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_drop_weapon_K2Node_GbxInputActionEvent_Discrete_22");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_drop_weapon_K2Node_GbxInputActionEvent_Discrete_22_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_weapon_mode_K2Node_GbxInputActionEvent_Discrete_21
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_weapon_mode_K2Node_GbxInputActionEvent_Discrete_21(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_weapon_mode_K2Node_GbxInputActionEvent_Discrete_21");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_weapon_mode_K2Node_GbxInputActionEvent_Discrete_21_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_prev_weapon_K2Node_GbxInputActionEvent_Discrete_20
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_prev_weapon_K2Node_GbxInputActionEvent_Discrete_20(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_prev_weapon_K2Node_GbxInputActionEvent_Discrete_20");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_prev_weapon_K2Node_GbxInputActionEvent_Discrete_20_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_next_weapon_K2Node_GbxInputActionEvent_Discrete_19
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_next_weapon_K2Node_GbxInputActionEvent_Discrete_19(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_next_weapon_K2Node_GbxInputActionEvent_Discrete_19");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_next_weapon_K2Node_GbxInputActionEvent_Discrete_19_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_select_weapon1_K2Node_GbxInputActionEvent_Discrete_18
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_select_weapon1_K2Node_GbxInputActionEvent_Discrete_18(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_select_weapon1_K2Node_GbxInputActionEvent_Discrete_18");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_select_weapon1_K2Node_GbxInputActionEvent_Discrete_18_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_select_weapon2_K2Node_GbxInputActionEvent_Discrete_17
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_select_weapon2_K2Node_GbxInputActionEvent_Discrete_17(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_select_weapon2_K2Node_GbxInputActionEvent_Discrete_17");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_select_weapon2_K2Node_GbxInputActionEvent_Discrete_17_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_select_weapon3_K2Node_GbxInputActionEvent_Discrete_16
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_select_weapon3_K2Node_GbxInputActionEvent_Discrete_16(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_select_weapon3_K2Node_GbxInputActionEvent_Discrete_16");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_select_weapon3_K2Node_GbxInputActionEvent_Discrete_16_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_select_weapon4_K2Node_GbxInputActionEvent_Discrete_15
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_select_weapon4_K2Node_GbxInputActionEvent_Discrete_15(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_select_weapon4_K2Node_GbxInputActionEvent_Discrete_15");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_select_weapon4_K2Node_GbxInputActionEvent_Discrete_15_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.GbxInpActEvt_pre_weapon+toggle_K2Node_GbxInputActionEvent_Discrete_14
// (BlueprintEvent)
// Parameters:
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::GbxInpActEvt_pre_weaponPlustoggle_K2Node_GbxInputActionEvent_Discrete_14(class FName Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "GbxInpActEvt_pre_weapon+toggle_K2Node_GbxInputActionEvent_Discrete_14");

	Params::UPlayerAbility_Weapon_C_GbxInpActEvt_pre_weaponPlustoggle_K2Node_GbxInputActionEvent_Discrete_14_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerAbility_Weapon_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerAbility_Weapon.PlayerAbility_Weapon_C.ExecuteUbergraph_PlayerAbility_Weapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action8                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action9                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action10                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action11                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action12                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_GbxInputActionEvent_Discrete_Action13                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerAbility_Weapon_C::ExecuteUbergraph_PlayerAbility_Weapon(int32 EntryPoint, class FName K2Node_GbxInputActionEvent_Discrete_Action7, class FName K2Node_GbxInputActionEvent_Discrete_Action6, class FName K2Node_GbxInputActionEvent_Discrete_Action5, class FName K2Node_GbxInputActionEvent_Discrete_Action4, class FName K2Node_GbxInputActionEvent_Discrete_Action3, class FName K2Node_GbxInputActionEvent_Discrete_Action2, class FName K2Node_GbxInputActionEvent_Discrete_Action1, class FName K2Node_GbxInputActionEvent_Discrete_Action, class FName K2Node_GbxInputActionEvent_Discrete_Action8, class FName K2Node_GbxInputActionEvent_Discrete_Action9, class FName Temp_name_Variable, class FName K2Node_GbxInputActionEvent_Discrete_Action10, class FName K2Node_GbxInputActionEvent_Discrete_Action11, class FName Temp_name_Variable1, class FName K2Node_GbxInputActionEvent_Discrete_Action12, class FName K2Node_GbxInputActionEvent_Discrete_Action13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAbility_Weapon_C", "ExecuteUbergraph_PlayerAbility_Weapon");

	Params::UPlayerAbility_Weapon_C_ExecuteUbergraph_PlayerAbility_Weapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action7 = K2Node_GbxInputActionEvent_Discrete_Action7;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action6 = K2Node_GbxInputActionEvent_Discrete_Action6;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action5 = K2Node_GbxInputActionEvent_Discrete_Action5;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action4 = K2Node_GbxInputActionEvent_Discrete_Action4;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action3 = K2Node_GbxInputActionEvent_Discrete_Action3;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action2 = K2Node_GbxInputActionEvent_Discrete_Action2;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action1 = K2Node_GbxInputActionEvent_Discrete_Action1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action = K2Node_GbxInputActionEvent_Discrete_Action;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action8 = K2Node_GbxInputActionEvent_Discrete_Action8;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action9 = K2Node_GbxInputActionEvent_Discrete_Action9;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action10 = K2Node_GbxInputActionEvent_Discrete_Action10;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action11 = K2Node_GbxInputActionEvent_Discrete_Action11;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action12 = K2Node_GbxInputActionEvent_Discrete_Action12;
	Parms.K2Node_GbxInputActionEvent_Discrete_Action13 = K2Node_GbxInputActionEvent_Discrete_Action13;

	UObject::ProcessEvent(Func, &Parms);

}

}


