#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C
// (Actor, Pawn)

class UClass* ABP_EquipmentMenuPawn_Runes_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentMenuPawn_Runes_C");

	return Clss;
}


// BP_EquipmentMenuPawn_Runes_C BP_EquipmentMenuPawn_Runes.Default__BP_EquipmentMenuPawn_Runes_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentMenuPawn_Runes_C* ABP_EquipmentMenuPawn_Runes_C::GetDefaultObj()
{
	static class ABP_EquipmentMenuPawn_Runes_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentMenuPawn_Runes_C*>(ABP_EquipmentMenuPawn_Runes_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.SetLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Runes_C::SetLights(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "SetLights");

	Params::ABP_EquipmentMenuPawn_Runes_C_SetLights_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.CalcCursorLookAtLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMousePosition_LocationY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMousePosition_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DeprojectScreenToWorld_WorldPosition                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DeprojectScreenToWorld_WorldDirection                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeprojectScreenToWorld_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_LinePlaneIntersection_OriginNormal_T                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_LinePlaneIntersection_OriginNormal_Intersection         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Runes_C::CalcCursorLookAtLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LinePlaneIntersection_OriginNormal_T, const struct FVector& CallFunc_LinePlaneIntersection_OriginNormal_Intersection, bool CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "CalcCursorLookAtLocation");

	Params::ABP_EquipmentMenuPawn_Runes_C_CalcCursorLookAtLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_GetMousePosition_LocationX = CallFunc_GetMousePosition_LocationX;
	Parms.CallFunc_GetMousePosition_LocationY = CallFunc_GetMousePosition_LocationY;
	Parms.CallFunc_GetMousePosition_ReturnValue = CallFunc_GetMousePosition_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_DeprojectScreenToWorld_WorldPosition = CallFunc_DeprojectScreenToWorld_WorldPosition;
	Parms.CallFunc_DeprojectScreenToWorld_WorldDirection = CallFunc_DeprojectScreenToWorld_WorldDirection;
	Parms.CallFunc_DeprojectScreenToWorld_ReturnValue = CallFunc_DeprojectScreenToWorld_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_LinePlaneIntersection_OriginNormal_T = CallFunc_LinePlaneIntersection_OriginNormal_T;
	Parms.CallFunc_LinePlaneIntersection_OriginNormal_Intersection = CallFunc_LinePlaneIntersection_OriginNormal_Intersection;
	Parms.CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue = CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Runes_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Runes_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "ReceiveActorBeginOverlap");

	Params::ABP_EquipmentMenuPawn_Runes_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Runes_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "ReceiveTick");

	Params::ABP_EquipmentMenuPawn_Runes_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.Event_CustomPossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Runes_C::Event_CustomPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "Event_CustomPossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.Event_CustomUnpossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Runes_C::Event_CustomUnpossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "Event_CustomUnpossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Runes.BP_EquipmentMenuPawn_Runes_C.ExecuteUbergraph_BP_EquipmentMenuPawn_Runes
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Runes_C::ExecuteUbergraph_BP_EquipmentMenuPawn_Runes(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Runes_C", "ExecuteUbergraph_BP_EquipmentMenuPawn_Runes");

	Params::ABP_EquipmentMenuPawn_Runes_C_ExecuteUbergraph_BP_EquipmentMenuPawn_Runes_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


