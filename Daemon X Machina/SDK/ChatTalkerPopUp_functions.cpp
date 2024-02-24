#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ChatTalkerPopUp.ChatTalkerPopUp_C
// (Actor)

class UClass* AChatTalkerPopUp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatTalkerPopUp_C");

	return Clss;
}


// ChatTalkerPopUp_C ChatTalkerPopUp.Default__ChatTalkerPopUp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AChatTalkerPopUp_C* AChatTalkerPopUp_C::GetDefaultObj()
{
	static class AChatTalkerPopUp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AChatTalkerPopUp_C*>(AChatTalkerPopUp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChatTalkerPopUp.ChatTalkerPopUp_C.Destroy_InlineKeyboardBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChatTalkerPopUp_C::Destroy_InlineKeyboardBP(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatTalkerPopUp_C", "Destroy_InlineKeyboardBP");

	Params::AChatTalkerPopUp_C_Destroy_InlineKeyboardBP_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChatTalkerPopUp.ChatTalkerPopUp_C.Create_InlineKeyboardBP
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AInlineKeyboardActor_C*      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool AChatTalkerPopUp_C::Create_InlineKeyboardBP(const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AInlineKeyboardActor_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatTalkerPopUp_C", "Create_InlineKeyboardBP");

	Params::AChatTalkerPopUp_C_Create_InlineKeyboardBP_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChatTalkerPopUp.ChatTalkerPopUp_C.SetAnimationFromBP
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UOnl_chat_page02_C*          K2Node_DynamicCast_AsOnl_Chat_Page_02                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AChatTalkerPopUp_C::SetAnimationFromBP(class UOnl_chat_page02_C* K2Node_DynamicCast_AsOnl_Chat_Page_02, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatTalkerPopUp_C", "SetAnimationFromBP");

	Params::AChatTalkerPopUp_C_SetAnimationFromBP_Params Parms{};

	Parms.K2Node_DynamicCast_AsOnl_Chat_Page_02 = K2Node_DynamicCast_AsOnl_Chat_Page_02;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ChatTalkerPopUp.ChatTalkerPopUp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AChatTalkerPopUp_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChatTalkerPopUp_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


