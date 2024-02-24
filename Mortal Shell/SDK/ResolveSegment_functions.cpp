#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ResolveSegment.ResolveSegment_C
// (None)

class UClass* UResolveSegment_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResolveSegment_C");

	return Clss;
}


// ResolveSegment_C ResolveSegment.Default__ResolveSegment_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResolveSegment_C* UResolveSegment_C::GetDefaultObj()
{
	static class UResolveSegment_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResolveSegment_C*>(UResolveSegment_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResolveSegment.ResolveSegment_C.ReverseFillAnimIfPlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResolveSegment_C::ReverseFillAnimIfPlaying(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "ReverseFillAnimIfPlaying");

	Params::UResolveSegment_C_ReverseFillAnimIfPlaying_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResolveSegment.ResolveSegment_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResolveSegment_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "PreConstruct");

	Params::UResolveSegment_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResolveSegment.ResolveSegment_C.SetPercent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InPercent                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolveSegment_C::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "SetPercent");

	Params::UResolveSegment_C_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResolveSegment.ResolveSegment_C.SetSegmentFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResolveSegment_C::SetSegmentFilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "SetSegmentFilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResolveSegment.ResolveSegment_C.SetSegmentNotFilled
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResolveSegment_C::SetSegmentNotFilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "SetSegmentNotFilled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResolveSegment.ResolveSegment_C.PlayDrainedAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UResolveSegment_C::PlayDrainedAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "PlayDrainedAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ResolveSegment.ResolveSegment_C.ExecuteUbergraph_ResolveSegment
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_InPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromMaterial_ReturnValue                       (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          K2Node_DynamicCast_AsHorizontal_Box_Slot                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResolveSegment_C::ExecuteUbergraph_ResolveSegment(int32 EntryPoint, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_InPercent, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_Greater_FloatFloat_ReturnValue, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, const struct FMargin& K2Node_MakeStruct_Margin, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResolveSegment_C", "ExecuteUbergraph_ResolveSegment");

	Params::UResolveSegment_C_ExecuteUbergraph_ResolveSegment_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_InPercent = K2Node_CustomEvent_InPercent;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeBrushFromMaterial_ReturnValue = CallFunc_MakeBrushFromMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsHorizontal_Box_Slot = K2Node_DynamicCast_AsHorizontal_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


