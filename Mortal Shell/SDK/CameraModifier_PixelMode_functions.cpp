#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraModifier_PixelMode.CameraModifier_PixelMode_C
// (None)

class UClass* UCameraModifier_PixelMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraModifier_PixelMode_C");

	return Clss;
}


// CameraModifier_PixelMode_C CameraModifier_PixelMode.Default__CameraModifier_PixelMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraModifier_PixelMode_C* UCameraModifier_PixelMode_C::GetDefaultObj()
{
	static class UCameraModifier_PixelMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraModifier_PixelMode_C*>(UCameraModifier_PixelMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CameraModifier_PixelMode.CameraModifier_PixelMode_C.BlueprintModifyPostProcess
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PostProcessBlendWeight                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPostProcessSettings        PostProcessSettings                                              (Parm, OutParm)
// struct FWeightedBlendable          K2Node_MakeStruct_WeightedBlendable                              (NoDestructor)
// TArray<struct FWeightedBlendable>  K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FWeightedBlendables         K2Node_MakeStruct_WeightedBlendables                             (None)
// struct FPostProcessSettings        K2Node_MakeStruct_PostProcessSettings                            (None)

void UCameraModifier_PixelMode_C::BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CameraModifier_PixelMode_C", "BlueprintModifyPostProcess");

	Params::UCameraModifier_PixelMode_C_BlueprintModifyPostProcess_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.K2Node_MakeStruct_WeightedBlendable = K2Node_MakeStruct_WeightedBlendable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_WeightedBlendables = K2Node_MakeStruct_WeightedBlendables;
	Parms.K2Node_MakeStruct_PostProcessSettings = K2Node_MakeStruct_PostProcessSettings;

	UObject::ProcessEvent(Func, &Parms);

	if (PostProcessBlendWeight != nullptr)
		*PostProcessBlendWeight = Parms.PostProcessBlendWeight;

	if (PostProcessSettings != nullptr)
		*PostProcessSettings = std::move(Parms.PostProcessSettings);

}

}


