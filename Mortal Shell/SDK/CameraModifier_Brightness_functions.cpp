#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_Brightness.CameraModifier_Brightness_C
// (None)

class UClass* UCameraModifier_Brightness_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_Brightness_C");

	return Clss;
}


// CameraModifier_Brightness_C CameraModifier_Brightness.Default__CameraModifier_Brightness_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_Brightness_C* UCameraModifier_Brightness_C::GetDefaultObj()
{
	static class UCameraModifier_Brightness_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_Brightness_C*>(UCameraModifier_Brightness_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_Brightness.CameraModifier_Brightness_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        PostProcessSettings                                              (Parm, OutParm)
// struct FVector4                    K2Node_MakeStruct_Vector4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void UCameraModifier_Brightness_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FVector4& K2Node_MakeStruct_Vector4, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_Brightness_C", "BlueprintModifyPostProcess");

	Params::UCameraModifier_Brightness_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.K2Node_MakeStruct_Vector4 = K2Node_MakeStruct_Vector4;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}

}


