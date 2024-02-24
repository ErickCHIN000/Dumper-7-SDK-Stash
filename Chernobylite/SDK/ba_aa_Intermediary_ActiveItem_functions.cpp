#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ba_aa_Intermediary_ActiveItem.ba_aa_Intermediary_ActiveItem_C
// (Actor)

class UClass* Aba_aa_Intermediary_ActiveItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ba_aa_Intermediary_ActiveItem_C");

	return Clss;
}


// ba_aa_Intermediary_ActiveItem_C ba_aa_Intermediary_ActiveItem.Default__ba_aa_Intermediary_ActiveItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Aba_aa_Intermediary_ActiveItem_C* Aba_aa_Intermediary_ActiveItem_C::GetDefaultObj()
{
	static class Aba_aa_Intermediary_ActiveItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Aba_aa_Intermediary_ActiveItem_C*>(Aba_aa_Intermediary_ActiveItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ba_aa_Intermediary_ActiveItem.ba_aa_Intermediary_ActiveItem_C.OnHideShowAdditional
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EState                  OutTargetState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Aba_aa_Intermediary_ActiveItem_C::OnHideShowAdditional(enum class EState OutTargetState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_C", "OnHideShowAdditional");

	Params::Aba_aa_Intermediary_ActiveItem_C_OnHideShowAdditional_Params Parms{};

	Parms.OutTargetState = OutTargetState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ba_aa_Intermediary_ActiveItem.ba_aa_Intermediary_ActiveItem_C.ExecuteUbergraph_ba_aa_Intermediary_ActiveItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EState                  K2Node_Event_OutTargetState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void Aba_aa_Intermediary_ActiveItem_C::ExecuteUbergraph_ba_aa_Intermediary_ActiveItem(int32 EntryPoint, enum class EState K2Node_Event_OutTargetState, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ba_aa_Intermediary_ActiveItem_C", "ExecuteUbergraph_ba_aa_Intermediary_ActiveItem");

	Params::Aba_aa_Intermediary_ActiveItem_C_ExecuteUbergraph_ba_aa_Intermediary_ActiveItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OutTargetState = K2Node_Event_OutTargetState;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


