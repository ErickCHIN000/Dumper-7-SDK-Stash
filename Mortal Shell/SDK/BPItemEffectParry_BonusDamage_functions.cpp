#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPItemEffectParry_BonusDamage.BPItemEffectParry_BonusDamage_C
// (None)

class UClass* UBPItemEffectParry_BonusDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPItemEffectParry_BonusDamage_C");

	return Clss;
}


// BPItemEffectParry_BonusDamage_C BPItemEffectParry_BonusDamage.Default__BPItemEffectParry_BonusDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPItemEffectParry_BonusDamage_C* UBPItemEffectParry_BonusDamage_C::GetDefaultObj()
{
	static class UBPItemEffectParry_BonusDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPItemEffectParry_BonusDamage_C*>(UBPItemEffectParry_BonusDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPItemEffectParry_BonusDamage.BPItemEffectParry_BonusDamage_C.OnParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParry_BonusDamage_C::OnParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParry_BonusDamage_C", "OnParry");

	Params::UBPItemEffectParry_BonusDamage_C_OnParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPItemEffectParry_BonusDamage.BPItemEffectParry_BonusDamage_C.OnDmgHappened
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPItemEffectParry_BonusDamage_C::OnDmgHappened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParry_BonusDamage_C", "OnDmgHappened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPItemEffectParry_BonusDamage.BPItemEffectParry_BonusDamage_C.ExecuteUbergraph_BPItemEffectParry_BonusDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_Event_ParriedEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPItemEffectParry_BonusDamage_C::ExecuteUbergraph_BPItemEffectParry_BonusDamage(int32 EntryPoint, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable_1, float K2Node_Select_Default, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPItemEffectParry_BonusDamage_C", "ExecuteUbergraph_BPItemEffectParry_BonusDamage");

	Params::UBPItemEffectParry_BonusDamage_C_ExecuteUbergraph_BPItemEffectParry_BonusDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_ParriedEnemy = K2Node_Event_ParriedEnemy;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


