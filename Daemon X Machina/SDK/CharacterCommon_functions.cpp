#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CharacterCommon.CharacterCommon_C
// (Actor, Pawn)

class UClass* ACharacterCommon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CharacterCommon_C");

	return Clss;
}


// CharacterCommon_C CharacterCommon.Default__CharacterCommon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACharacterCommon_C* ACharacterCommon_C::GetDefaultObj()
{
	static class ACharacterCommon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACharacterCommon_C*>(ACharacterCommon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CharacterCommon.CharacterCommon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ACharacterCommon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCommon_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CharacterCommon.CharacterCommon_C.CameraArm_SetTargetOffset
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ACharacterCommon_C::CameraArm_SetTargetOffset(const struct FVector& Offset, float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCommon_C", "CameraArm_SetTargetOffset");

	Params::ACharacterCommon_C_CameraArm_SetTargetOffset_Params Parms{};

	Parms.Offset = Offset;
	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CharacterCommon.CharacterCommon_C.ExecuteUbergraph_CharacterCommon
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_Offset                                              (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Time                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArsenalController_C*        K2Node_DynamicCast_AsArsenal_Controller                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDefaultCameraControlComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACharacterCommon_C::ExecuteUbergraph_CharacterCommon(int32 EntryPoint, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, const struct FVector& K2Node_Event_Offset, float K2Node_Event_Time, class AController* CallFunc_GetController_ReturnValue, class AArsenalController_C* K2Node_DynamicCast_AsArsenal_Controller, bool K2Node_DynamicCast_bSuccess, class UDefaultCameraControlComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CharacterCommon_C", "ExecuteUbergraph_CharacterCommon");

	Params::ACharacterCommon_C_ExecuteUbergraph_CharacterCommon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_Event_Offset = K2Node_Event_Offset;
	Parms.K2Node_Event_Time = K2Node_Event_Time;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsArsenal_Controller = K2Node_DynamicCast_AsArsenal_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


