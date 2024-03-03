#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_Stats.WB_Stats_C
// (None)

class UClass* UWB_Stats_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_Stats_C");

	return Clss;
}


// WB_Stats_C WB_Stats.Default__WB_Stats_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_Stats_C* UWB_Stats_C::GetDefaultObj()
{
	static class UWB_Stats_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_Stats_C*>(UWB_Stats_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_Stats.WB_Stats_C.Get CI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_Get_Current_Level_Level                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_Stats_C::Get_CI(int32 CallFunc_Get_Current_Level_Level, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get CI");

	Params::UWB_Stats_C_Get_CI_Params Parms{};

	Parms.CallFunc_Get_Current_Level_Level = CallFunc_Get_Current_Level_Level;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Level
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_Get_Current_Level_Level                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_Stats_C::Get_Level(int32 CallFunc_Get_Current_Level_Level, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Level");

	Params::UWB_Stats_C_Get_Level_Params Parms{};

	Parms.CallFunc_Get_Current_Level_Level = CallFunc_Get_Current_Level_Level;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Gold
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Gold(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Gold");

	Params::UWB_Stats_C_Get_Gold_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Block
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Block(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Block");

	Params::UWB_Stats_C_Get_Block_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Mana
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Mana(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Mana");

	Params::UWB_Stats_C_Get_Mana_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Range AttackSpeed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Range_AttackSpeed(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Range AttackSpeed");

	Params::UWB_Stats_C_Get_Range_AttackSpeed_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Range Damage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Range_Damage(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Range Damage");

	Params::UWB_Stats_C_Get_Range_Damage_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Attack Speed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Attack_Speed(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Attack Speed");

	Params::UWB_Stats_C_Get_Attack_Speed_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Damage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Damage(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Damage");

	Params::UWB_Stats_C_Get_Damage_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Armor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Armor(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Armor");

	Params::UWB_Stats_C_Get_Armor_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Stamina
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Stamina(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Stamina");

	Params::UWB_Stats_C_Get_Stamina_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Get Health
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// float                              CallFunc_GetStatValue_Value                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UWB_Stats_C::Get_Health(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Get Health");

	Params::UWB_Stats_C_Get_Health_Params Parms{};

	Parms.CallFunc_GetStatValue_Value = CallFunc_GetStatValue_Value;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_Stats.WB_Stats_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_Stats_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Stats.WB_Stats_C.ShowStatsWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_Stats_C::ShowStatsWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "ShowStatsWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_Stats.WB_Stats_C.ExecuteUbergraph_WB_Stats
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_CombatCharacter_C*       CallFunc_Get_Player_Reference_Player                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_Stats_C::ExecuteUbergraph_WB_Stats(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_Stats_C", "ExecuteUbergraph_WB_Stats");

	Params::UWB_Stats_C_ExecuteUbergraph_WB_Stats_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Get_Player_Reference_Player = CallFunc_Get_Player_Reference_Player;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


