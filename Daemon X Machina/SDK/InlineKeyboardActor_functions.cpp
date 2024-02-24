#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InlineKeyboardActor.InlineKeyboardActor_C
// (Actor)

class UClass* AInlineKeyboardActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InlineKeyboardActor_C");

	return Clss;
}


// InlineKeyboardActor_C InlineKeyboardActor.Default__InlineKeyboardActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AInlineKeyboardActor_C* AInlineKeyboardActor_C::GetDefaultObj()
{
	static class AInlineKeyboardActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AInlineKeyboardActor_C*>(AInlineKeyboardActor_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InlineKeyboardActor.InlineKeyboardActor_C.SpawnPopup_CommonBP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLCommonPopup*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACommonPopUp_C*              CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class ATTLCommonPopup* AInlineKeyboardActor_C::SpawnPopup_CommonBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACommonPopUp_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InlineKeyboardActor_C", "SpawnPopup_CommonBP");

	Params::AInlineKeyboardActor_C_SpawnPopup_CommonBP_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InlineKeyboardActor.InlineKeyboardActor_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AInlineKeyboardActor_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InlineKeyboardActor_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


