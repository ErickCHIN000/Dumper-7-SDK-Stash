#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C
// (Actor)

class UClass* ABP_SKItem_Biofuel_Lamp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SKItem_Biofuel_Lamp_C");

	return Clss;
}


// BP_SKItem_Biofuel_Lamp_C BP_SKItem_Biofuel_Lamp.Default__BP_SKItem_Biofuel_Lamp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SKItem_Biofuel_Lamp_C* ABP_SKItem_Biofuel_Lamp_C::GetDefaultObj()
{
	static class ABP_SKItem_Biofuel_Lamp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SKItem_Biofuel_Lamp_C*>(ABP_SKItem_Biofuel_Lamp_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.PlaySwitchAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusPlayerCharacter*      CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EventInstanceIsValid_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SKItem_Biofuel_Lamp_C::PlaySwitchAudio(class AIcarusPlayerCharacter* CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEventAtLocation_ReturnValue, bool CallFunc_EventInstanceIsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SKItem_Biofuel_Lamp_C", "PlaySwitchAudio");

	Params::ABP_SKItem_Biofuel_Lamp_C_PlaySwitchAudio_Params Parms{};

	Parms.CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue = CallFunc_GetOwningIcarusPlayerCharacter_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_PlayEventAtLocation_ReturnValue = CallFunc_PlayEventAtLocation_ReturnValue;
	Parms.CallFunc_EventInstanceIsValid_ReturnValue = CallFunc_EventInstanceIsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.UpdateLightSlotPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_AddLocalOffset_SweepHitResult                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SKItem_Biofuel_Lamp_C::UpdateLightSlotPosition(const struct FHitResult& CallFunc_K2_AddLocalOffset_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SKItem_Biofuel_Lamp_C", "UpdateLightSlotPosition");

	Params::ABP_SKItem_Biofuel_Lamp_C_UpdateLightSlotPosition_Params Parms{};

	Parms.CallFunc_K2_AddLocalOffset_SweepHitResult = CallFunc_K2_AddLocalOffset_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.LightUpdated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EValid                  CallFunc_GetTrait_Paths                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_FocusableBehaviour_C*    CallFunc_GetTrait_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLit_Lit                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SKItem_Biofuel_Lamp_C::LightUpdated(enum class EValid CallFunc_GetTrait_Paths, class UBP_FocusableBehaviour_C* CallFunc_GetTrait_ReturnValue, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_IsLit_Lit, class UMaterialInterface* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SKItem_Biofuel_Lamp_C", "LightUpdated");

	Params::ABP_SKItem_Biofuel_Lamp_C_LightUpdated_Params Parms{};

	Parms.CallFunc_GetTrait_Paths = CallFunc_GetTrait_Paths;
	Parms.CallFunc_GetTrait_ReturnValue = CallFunc_GetTrait_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_IsLit_Lit = CallFunc_IsLit_Lit;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_SKItem_Biofuel_Lamp_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SKItem_Biofuel_Lamp_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SKItem_Biofuel_Lamp.BP_SKItem_Biofuel_Lamp_C.ExecuteUbergraph_BP_SKItem_Biofuel_Lamp
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_SKItem_Biofuel_Lamp_C::ExecuteUbergraph_BP_SKItem_Biofuel_Lamp(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SKItem_Biofuel_Lamp_C", "ExecuteUbergraph_BP_SKItem_Biofuel_Lamp");

	Params::ABP_SKItem_Biofuel_Lamp_C_ExecuteUbergraph_BP_SKItem_Biofuel_Lamp_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


