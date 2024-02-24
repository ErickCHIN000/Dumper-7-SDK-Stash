#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ZoneMap_Planet.BP_ZoneMap_Planet_C
// (Actor)

class UClass* ABP_ZoneMap_Planet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ZoneMap_Planet_C");

	return Clss;
}


// BP_ZoneMap_Planet_C BP_ZoneMap_Planet.Default__BP_ZoneMap_Planet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ZoneMap_Planet_C* ABP_ZoneMap_Planet_C::GetDefaultObj()
{
	static class ABP_ZoneMap_Planet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ZoneMap_Planet_C*>(ABP_ZoneMap_Planet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlanetMapData_C*            Planet_Map_Data                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlanetMapData_C*            K2Node_DynamicCast_AsPlanet_Map_Data                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_Planet_C::Initialize(class UPlanetMapData_C* Planet_Map_Data, bool Temp_bool_Variable, bool Temp_bool_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, const struct FRotator& CallFunc_NegateRotator_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UPlanetMapData_C* K2Node_DynamicCast_AsPlanet_Map_Data, bool K2Node_DynamicCast_bSuccess, const struct FRotator& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_Multiply_FloatFloat_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue1, class UMaterialInterface* K2Node_Select1_Default, class UMaterialInterface* K2Node_Select2_Default, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue2, class UMaterialInterface* K2Node_Select3_Default, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Initialize");

	Params::ABP_ZoneMap_Planet_C_Initialize_Params Parms{};

	Parms.Planet_Map_Data = Planet_Map_Data;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.K2Node_DynamicCast_AsPlanet_Map_Data = K2Node_DynamicCast_AsPlanet_Map_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue1 = CallFunc_GetMaterial_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetMaterial_ReturnValue2 = CallFunc_GetMaterial_ReturnValue2;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlanetMapData_C*            Planet_Map_Data                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_Planet_C::UserConstructionScript(class UPlanetMapData_C* Planet_Map_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "UserConstructionScript");

	Params::ABP_ZoneMap_Planet_C_UserConstructionScript_Params Parms{};

	Parms.Planet_Map_Data = Planet_Map_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Animate_Orbital_Components__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Animate Orbital Components__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Animate Orbital Components__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Animate_Orbital_Components__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Animate Orbital Components__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ZoneMap_Planet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "ReceiveTick");

	Params::ABP_ZoneMap_Planet_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Transition_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Transition In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition In
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Interrupt_Transition_In()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Interrupt Transition In");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Transition Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Transition_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Transition Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Interrupt Transition Out
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Interrupt_Transition_Out()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Interrupt Transition Out");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Initialize Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Initialize_Planet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Initialize Planet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.Stop Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ZoneMap_Planet_C::Stop_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "Stop Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_ZoneMap_Planet.BP_ZoneMap_Planet_C.ExecuteUbergraph_BP_ZoneMap_Planet
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TransformDirection_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_NegateRotator_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FRotator                    K2Node_Select_Default                                            (IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_ZoneMap_Planet_C::ExecuteUbergraph_BP_ZoneMap_Planet(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool Temp_bool_Variable, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_TransformDirection_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FRotator& CallFunc_NegateRotator_ReturnValue, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ZoneMap_Planet_C", "ExecuteUbergraph_BP_ZoneMap_Planet");

	Params::ABP_ZoneMap_Planet_C_ExecuteUbergraph_BP_ZoneMap_Planet_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_TransformDirection_ReturnValue = CallFunc_TransformDirection_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_NegateRotator_ReturnValue = CallFunc_NegateRotator_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


