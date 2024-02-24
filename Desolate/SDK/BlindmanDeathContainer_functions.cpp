#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindmanDeathContainer.BlindmanDeathContainer_C
// (Actor)

class UClass* ABlindmanDeathContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindmanDeathContainer_C");

	return Clss;
}


// BlindmanDeathContainer_C BlindmanDeathContainer.Default__BlindmanDeathContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABlindmanDeathContainer_C* ABlindmanDeathContainer_C::GetDefaultObj()
{
	static class ABlindmanDeathContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABlindmanDeathContainer_C*>(ABlindmanDeathContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BlindmanDeathContainer.BlindmanDeathContainer_C.OnUseActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ASHPlayerCharacter*          Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABlindmanDeathContainer_C::OnUseActor(class ASHPlayerCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindmanDeathContainer_C", "OnUseActor");

	Params::ABlindmanDeathContainer_C_OnUseActor_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BlindmanDeathContainer.BlindmanDeathContainer_C.ExecuteUbergraph_BlindmanDeathContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASHPlayerCharacter*          K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABlindmanDeathContainer_C::ExecuteUbergraph_BlindmanDeathContainer(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BlindmanDeathContainer_C", "ExecuteUbergraph_BlindmanDeathContainer");

	Params::ABlindmanDeathContainer_C_ExecuteUbergraph_BlindmanDeathContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;

	UObject::ProcessEvent(Func, &Parms);

}

}


