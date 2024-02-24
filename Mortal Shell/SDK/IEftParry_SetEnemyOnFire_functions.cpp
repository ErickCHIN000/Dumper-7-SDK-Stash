#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEftParry_SetEnemyOnFire.IEftParry_SetEnemyOnFire_C
// (None)

class UClass* UIEftParry_SetEnemyOnFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEftParry_SetEnemyOnFire_C");

	return Clss;
}


// IEftParry_SetEnemyOnFire_C IEftParry_SetEnemyOnFire.Default__IEftParry_SetEnemyOnFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEftParry_SetEnemyOnFire_C* UIEftParry_SetEnemyOnFire_C::GetDefaultObj()
{
	static class UIEftParry_SetEnemyOnFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEftParry_SetEnemyOnFire_C*>(UIEftParry_SetEnemyOnFire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEftParry_SetEnemyOnFire.IEftParry_SetEnemyOnFire_C.OnParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_SetEnemyOnFire_C::OnParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_SetEnemyOnFire_C", "OnParry");

	Params::UIEftParry_SetEnemyOnFire_C_OnParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEftParry_SetEnemyOnFire.IEftParry_SetEnemyOnFire_C.ExecuteUbergraph_IEftParry_SetEnemyOnFire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_Event_ParriedEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_SetEnemyOnFire_C::ExecuteUbergraph_IEftParry_SetEnemyOnFire(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_SetEnemyOnFire_C", "ExecuteUbergraph_IEftParry_SetEnemyOnFire");

	Params::UIEftParry_SetEnemyOnFire_C_ExecuteUbergraph_IEftParry_SetEnemyOnFire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_ParriedEnemy = K2Node_Event_ParriedEnemy;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


