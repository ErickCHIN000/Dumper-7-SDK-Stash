#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPDmgEffect.BPDmgEffect_C
// (None)

class UClass* UBPDmgEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPDmgEffect_C");

	return Clss;
}


// BPDmgEffect_C BPDmgEffect.Default__BPDmgEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPDmgEffect_C* UBPDmgEffect_C::GetDefaultObj()
{
	static class UBPDmgEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPDmgEffect_C*>(UBPDmgEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPDmgEffect.BPDmgEffect_C.OnApplyDmgToHitActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OriginalDmg                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPDmgEffect_C::OnApplyDmgToHitActor(float OriginalDmg, class AActor* Source, class AActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPDmgEffect_C", "OnApplyDmgToHitActor");

	Params::UBPDmgEffect_C_OnApplyDmgToHitActor_Params Parms{};

	Parms.OriginalDmg = OriginalDmg;
	Parms.Source = Source;
	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}

}


