#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_LightPortal.EM_LightPortal_C
// (Actor)

class UClass* AEM_LightPortal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_LightPortal_C");

	return Clss;
}


// EM_LightPortal_C EM_LightPortal.Default__EM_LightPortal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_LightPortal_C* AEM_LightPortal_C::GetDefaultObj()
{
	static class AEM_LightPortal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_LightPortal_C*>(AEM_LightPortal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_LightPortal.EM_LightPortal_C.GetEmergeTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor)

void AEM_LightPortal_C::GetEmergeTransform(struct FTransform* Transform, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_LightPortal_C", "GetEmergeTransform");

	Params::AEM_LightPortal_C_GetEmergeTransform_Params Parms{};

	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function EM_LightPortal.EM_LightPortal_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_LightPortal_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_LightPortal_C", "OnTrigger");

	Params::AEM_LightPortal_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_LightPortal.EM_LightPortal_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_LightPortal_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_LightPortal_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_LightPortal.EM_LightPortal_C.ExecuteUbergraph_EM_LightPortal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetEmergeTransform_Transform                            (IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASexyBreederCharacter*       CallFunc_GetBreeder_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_LightPortal_C::ExecuteUbergraph_EM_LightPortal(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetEmergeTransform_Transform, bool K2Node_Event_bFromActivation, class ASexyBreederCharacter* CallFunc_GetBreeder_ReturnValue, bool CallFunc_CheckGameFlags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_LightPortal_C", "ExecuteUbergraph_EM_LightPortal");

	Params::AEM_LightPortal_C_ExecuteUbergraph_EM_LightPortal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEmergeTransform_Transform = CallFunc_GetEmergeTransform_Transform;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;
	Parms.CallFunc_GetBreeder_ReturnValue = CallFunc_GetBreeder_ReturnValue;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


