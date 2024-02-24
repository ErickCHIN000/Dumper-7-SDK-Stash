#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEftParry_RestoreResolve.IEftParry_RestoreResolve_C
// (None)

class UClass* UIEftParry_RestoreResolve_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEftParry_RestoreResolve_C");

	return Clss;
}


// IEftParry_RestoreResolve_C IEftParry_RestoreResolve.Default__IEftParry_RestoreResolve_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEftParry_RestoreResolve_C* UIEftParry_RestoreResolve_C::GetDefaultObj()
{
	static class UIEftParry_RestoreResolve_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEftParry_RestoreResolve_C*>(UIEftParry_RestoreResolve_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEftParry_RestoreResolve.IEftParry_RestoreResolve_C.OnParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_RestoreResolve_C::OnParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_RestoreResolve_C", "OnParry");

	Params::UIEftParry_RestoreResolve_C_OnParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEftParry_RestoreResolve.IEftParry_RestoreResolve_C.ExecuteUbergraph_IEftParry_RestoreResolve
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_Event_ParriedEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_RestoreResolve_C::ExecuteUbergraph_IEftParry_RestoreResolve(int32 EntryPoint, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_RestoreResolve_C", "ExecuteUbergraph_IEftParry_RestoreResolve");

	Params::UIEftParry_RestoreResolve_C_ExecuteUbergraph_IEftParry_RestoreResolve_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_ParriedEnemy = K2Node_Event_ParriedEnemy;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


