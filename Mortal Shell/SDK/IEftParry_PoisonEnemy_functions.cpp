#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEftParry_PoisonEnemy.IEftParry_PoisonEnemy_C
// (None)

class UClass* UIEftParry_PoisonEnemy_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEftParry_PoisonEnemy_C");

	return Clss;
}


// IEftParry_PoisonEnemy_C IEftParry_PoisonEnemy.Default__IEftParry_PoisonEnemy_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEftParry_PoisonEnemy_C* UIEftParry_PoisonEnemy_C::GetDefaultObj()
{
	static class UIEftParry_PoisonEnemy_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEftParry_PoisonEnemy_C*>(UIEftParry_PoisonEnemy_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEftParry_PoisonEnemy.IEftParry_PoisonEnemy_C.OnParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_PoisonEnemy_C::OnParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_PoisonEnemy_C", "OnParry");

	Params::UIEftParry_PoisonEnemy_C_OnParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEftParry_PoisonEnemy.IEftParry_PoisonEnemy_C.ExecuteUbergraph_IEftParry_PoisonEnemy
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_Event_ParriedEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_PoisonEnemy_C::ExecuteUbergraph_IEftParry_PoisonEnemy(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, float K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_PoisonEnemy_C", "ExecuteUbergraph_IEftParry_PoisonEnemy");

	Params::UIEftParry_PoisonEnemy_C_ExecuteUbergraph_IEftParry_PoisonEnemy_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_ParriedEnemy = K2Node_Event_ParriedEnemy;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


