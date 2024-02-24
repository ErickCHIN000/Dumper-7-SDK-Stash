#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BPAnim_PlayerCharacter_HeadAcc.BPAnim_PlayerCharacter_HeadAcc_C
// (None)

class UClass* UBPAnim_PlayerCharacter_HeadAcc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPAnim_PlayerCharacter_HeadAcc_C");

	return Clss;
}


// BPAnim_PlayerCharacter_HeadAcc_C BPAnim_PlayerCharacter_HeadAcc.Default__BPAnim_PlayerCharacter_HeadAcc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPAnim_PlayerCharacter_HeadAcc_C* UBPAnim_PlayerCharacter_HeadAcc_C::GetDefaultObj()
{
	static class UBPAnim_PlayerCharacter_HeadAcc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPAnim_PlayerCharacter_HeadAcc_C*>(UBPAnim_PlayerCharacter_HeadAcc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPAnim_PlayerCharacter_HeadAcc.BPAnim_PlayerCharacter_HeadAcc_C.ExecuteUbergraph_BPAnim_PlayerCharacter_HeadAcc
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPAnim_PlayerCharacter_HeadAcc_C::ExecuteUbergraph_BPAnim_PlayerCharacter_HeadAcc(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPAnim_PlayerCharacter_HeadAcc_C", "ExecuteUbergraph_BPAnim_PlayerCharacter_HeadAcc");

	Params::UBPAnim_PlayerCharacter_HeadAcc_C_ExecuteUbergraph_BPAnim_PlayerCharacter_HeadAcc_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


