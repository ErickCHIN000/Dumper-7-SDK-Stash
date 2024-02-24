#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IEft_HealOnDmgBlock.IEft_HealOnDmgBlock_C
// (None)

class UClass* UIEft_HealOnDmgBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IEft_HealOnDmgBlock_C");

	return Clss;
}


// IEft_HealOnDmgBlock_C IEft_HealOnDmgBlock.Default__IEft_HealOnDmgBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UIEft_HealOnDmgBlock_C* UIEft_HealOnDmgBlock_C::GetDefaultObj()
{
	static class UIEft_HealOnDmgBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UIEft_HealOnDmgBlock_C*>(UIEft_HealOnDmgBlock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IEft_HealOnDmgBlock.IEft_HealOnDmgBlock_C.OnDamageBlocked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SourceActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_HealOnDmgBlock_C::OnDamageBlocked(class AActor* SourceActor, float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_HealOnDmgBlock_C", "OnDamageBlocked");

	Params::UIEft_HealOnDmgBlock_C_OnDamageBlocked_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function IEft_HealOnDmgBlock.IEft_HealOnDmgBlock_C.ExecuteUbergraph_IEft_HealOnDmgBlock
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_SourceActor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UIEft_HealOnDmgBlock_C::ExecuteUbergraph_IEft_HealOnDmgBlock(int32 EntryPoint, float CallFunc_SelectFloat_ReturnValue, class AActor* K2Node_Event_SourceActor, float K2Node_Event_Amount, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IEft_HealOnDmgBlock_C", "ExecuteUbergraph_IEft_HealOnDmgBlock");

	Params::UIEft_HealOnDmgBlock_C_ExecuteUbergraph_IEft_HealOnDmgBlock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.K2Node_Event_SourceActor = K2Node_Event_SourceActor;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


