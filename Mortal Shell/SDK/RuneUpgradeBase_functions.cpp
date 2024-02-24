#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RuneUpgradeBase.RuneUpgradeBase_C
// (None)

class UClass* URuneUpgradeBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RuneUpgradeBase_C");

	return Clss;
}


// RuneUpgradeBase_C RuneUpgradeBase.Default__RuneUpgradeBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URuneUpgradeBase_C* URuneUpgradeBase_C::GetDefaultObj()
{
	static class URuneUpgradeBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URuneUpgradeBase_C*>(URuneUpgradeBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RuneUpgradeBase.RuneUpgradeBase_C.GetValueForTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              RuneX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URuneUpgradeBase_C::GetValueForTier(int32* RuneX, enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "GetValueForTier");

	Params::URuneUpgradeBase_C_GetValueForTier_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (RuneX != nullptr)
		*RuneX = Parms.RuneX;

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.GetChanceForTier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float URuneUpgradeBase_C::GetChanceForTier(enum class Enum_Rune_Tier Temp_byte_Variable, int32 Temp_int_Variable, int32 K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "GetChanceForTier");

	Params::URuneUpgradeBase_C_GetChanceForTier_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.CanHealPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool URuneUpgradeBase_C::CanHealPlayer(bool CallFunc_NotEqual_ByteByte_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "CanHealPlayer");

	Params::URuneUpgradeBase_C_CanHealPlayer_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneUpgradeBase_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneUpgradeBase_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.Rune_Add
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneUpgradeBase_C::Rune_Add()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "Rune_Add");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.Rune_Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URuneUpgradeBase_C::Rune_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "Rune_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RuneUpgradeBase.RuneUpgradeBase_C.ExecuteUbergraph_RuneUpgradeBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddRuneStatusIcon_UniqueID                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URuneUpgradeBase_C::ExecuteUbergraph_RuneUpgradeBase(int32 EntryPoint, int32 CallFunc_AddRuneStatusIcon_UniqueID, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RuneUpgradeBase_C", "ExecuteUbergraph_RuneUpgradeBase");

	Params::URuneUpgradeBase_C_ExecuteUbergraph_RuneUpgradeBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AddRuneStatusIcon_UniqueID = CallFunc_AddRuneStatusIcon_UniqueID;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


