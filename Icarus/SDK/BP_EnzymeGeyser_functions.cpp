#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnzymeGeyser.BP_EnzymeGeyser_C
// (Actor)

class UClass* ABP_EnzymeGeyser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnzymeGeyser_C");

	return Clss;
}


// BP_EnzymeGeyser_C BP_EnzymeGeyser.Default__BP_EnzymeGeyser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EnzymeGeyser_C* ABP_EnzymeGeyser_C::GetDefaultObj()
{
	static class ABP_EnzymeGeyser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EnzymeGeyser_C*>(ABP_EnzymeGeyser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.DebugMaxCompletions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_EnzymeGeyser_C::DebugMaxCompletions(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "DebugMaxCompletions");

	Params::ABP_EnzymeGeyser_C_DebugMaxCompletions_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.DeactivateEruptionFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::DeactivateEruptionFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "DeactivateEruptionFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.ActivateEruptionFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::ActivateEruptionFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "ActivateEruptionFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.UpdateBiome
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_SampleBiomeAtLocation_ReturnValue                       (NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAtmospheresEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchRowEnum_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EnzymeGeyser_C::UpdateBiome(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FBiomesRowHandle& CallFunc_SampleBiomeAtLocation_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FAtmospheresEnum& CallFunc_RowHandleToStruct_ReturnValue, bool K2Node_SwitchRowEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "UpdateBiome");

	Params::ABP_EnzymeGeyser_C_UpdateBiome_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SampleBiomeAtLocation_ReturnValue = CallFunc_SampleBiomeAtLocation_ReturnValue;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.K2Node_SwitchRowEnum_CmpSuccess = K2Node_SwitchRowEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.HideEditorLocator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EnzymeGeyser_C::HideEditorLocator(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "HideEditorLocator");

	Params::ABP_EnzymeGeyser_C_HideEditorLocator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.ShowEditorLocator
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnzymeGeyser_C::ShowEditorLocator(const struct FTransform& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "ShowEditorLocator");

	Params::ABP_EnzymeGeyser_C_ShowEditorLocator_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.UpdateAudioState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::UpdateAudioState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "UpdateAudioState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.OnRep_HasAttachedAnalyzer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EnzymeGeyser_C::OnRep_HasAttachedAnalyzer(bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "OnRep_HasAttachedAnalyzer");

	Params::ABP_EnzymeGeyser_C_OnRep_HasAttachedAnalyzer_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.AddAttachedDeployable
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADeployable*                 Deployable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnzymeGeyser_C::AddAttachedDeployable(class ADeployable* Deployable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "AddAttachedDeployable");

	Params::ABP_EnzymeGeyser_C_AddAttachedDeployable_Params Parms{};

	Parms.Deployable = Deployable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.RemoveAttachedDeployable
// (Event, Public, BlueprintEvent)
// Parameters:
// class ADeployable*                 Deployable                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnzymeGeyser_C::RemoveAttachedDeployable(class ADeployable* Deployable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "RemoveAttachedDeployable");

	Params::ABP_EnzymeGeyser_C_RemoveAttachedDeployable_Params Parms{};

	Parms.Deployable = Deployable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.ActivateEruption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::ActivateEruption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "ActivateEruption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.DeactivateEruption
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::DeactivateEruption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "DeactivateEruption");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.ResetCompletions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EnzymeGeyser_C::ResetCompletions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "ResetCompletions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnzymeGeyser.BP_EnzymeGeyser_C.ExecuteUbergraph_BP_EnzymeGeyser
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 K2Node_Event_Deployable_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ADeployable*                 K2Node_Event_Deployable                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentScale_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EnzymeGeyser_C::ExecuteUbergraph_BP_EnzymeGeyser(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, class ADeployable* K2Node_Event_Deployable_1, class ADeployable* K2Node_Event_Deployable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnzymeGeyser_C", "ExecuteUbergraph_BP_EnzymeGeyser");

	Params::ABP_EnzymeGeyser_C_ExecuteUbergraph_BP_EnzymeGeyser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_Event_Deployable_1 = K2Node_Event_Deployable_1;
	Parms.K2Node_Event_Deployable = K2Node_Event_Deployable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


