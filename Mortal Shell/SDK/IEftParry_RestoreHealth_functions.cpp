#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEftParry_RestoreHealth.IEftParry_RestoreHealth_C
// (None)

class UClass* UIEftParry_RestoreHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEftParry_RestoreHealth_C");

	return Clss;
}


// IEftParry_RestoreHealth_C IEftParry_RestoreHealth.Default__IEftParry_RestoreHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEftParry_RestoreHealth_C* UIEftParry_RestoreHealth_C::GetDefaultObj()
{
	static class UIEftParry_RestoreHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEftParry_RestoreHealth_C*>(UIEftParry_RestoreHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEftParry_RestoreHealth.IEftParry_RestoreHealth_C.OnParry
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            ParriedEnemy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEftParry_RestoreHealth_C::OnParry(class ABaseCharacter_C* ParriedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_RestoreHealth_C", "OnParry");

	Params::UIEftParry_RestoreHealth_C_OnParry_Params Parms{};

	Parms.ParriedEnemy = ParriedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEftParry_RestoreHealth.IEftParry_RestoreHealth_C.ExecuteUbergraph_IEftParry_RestoreHealth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_Event_ParriedEnemy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ServerSetHealth_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UIEftParry_RestoreHealth_C::ExecuteUbergraph_IEftParry_RestoreHealth(int32 EntryPoint, bool Temp_bool_Variable, class ABaseCharacter_C* K2Node_Event_ParriedEnemy, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 K2Node_Select_Default, bool CallFunc_ServerSetHealth_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEftParry_RestoreHealth_C", "ExecuteUbergraph_IEftParry_RestoreHealth");

	Params::UIEftParry_RestoreHealth_C_ExecuteUbergraph_IEftParry_RestoreHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_ParriedEnemy = K2Node_Event_ParriedEnemy;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ServerSetHealth_Success = CallFunc_ServerSetHealth_Success;

	UObject::ProcessEvent(Func, &Parms);

}

}


