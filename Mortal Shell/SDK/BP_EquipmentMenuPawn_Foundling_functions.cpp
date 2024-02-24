#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C
// (Actor, Pawn)

class UClass* ABP_EquipmentMenuPawn_Foundling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentMenuPawn_Foundling_C");

	return Clss;
}


// BP_EquipmentMenuPawn_Foundling_C BP_EquipmentMenuPawn_Foundling.Default__BP_EquipmentMenuPawn_Foundling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentMenuPawn_Foundling_C* ABP_EquipmentMenuPawn_Foundling_C::GetDefaultObj()
{
	static class ABP_EquipmentMenuPawn_Foundling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentMenuPawn_Foundling_C*>(ABP_EquipmentMenuPawn_Foundling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.UpdateDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_ShellDye           CustomDyeValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Foundling_C::UpdateDye(enum class Enum_ShellDye CustomDyeValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "UpdateDye");

	Params::ABP_EquipmentMenuPawn_Foundling_C_UpdateDye_Params Parms{};

	Parms.CustomDyeValue = CustomDyeValue;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.SetLights
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Foundling_C::SetLights(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "SetLights");

	Params::ABP_EquipmentMenuPawn_Foundling_C_SetLights_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.GetWeaponAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBlendSpaceBase*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlendSpaceBase*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UBlendSpaceBase* ABP_EquipmentMenuPawn_Foundling_C::GetWeaponAnimation(enum class EComboTypes Temp_byte_Variable, class UBlendSpaceBase* Temp_object_Variable, class UBlendSpaceBase* Temp_object_Variable_1, class UBlendSpaceBase* Temp_object_Variable_2, class UBlendSpaceBase* Temp_object_Variable_3, class UBlendSpaceBase* Temp_object_Variable_4, class UBlendSpaceBase* Temp_object_Variable_5, class UBlendSpaceBase* Temp_object_Variable_6, class UBlendSpaceBase* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "GetWeaponAnimation");

	Params::ABP_EquipmentMenuPawn_Foundling_C_GetWeaponAnimation_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.SetCorrectAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlendSpaceBase*             CallFunc_GetWeaponAnimation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Foundling_C::SetCorrectAnimation(class UBlendSpaceBase* CallFunc_GetWeaponAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "SetCorrectAnimation");

	Params::ABP_EquipmentMenuPawn_Foundling_C_SetCorrectAnimation_Params Parms{};

	Parms.CallFunc_GetWeaponAnimation_ReturnValue = CallFunc_GetWeaponAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.ShowSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Foundling_C::ShowSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "ShowSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.HideSelf
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Foundling_C::HideSelf()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "HideSelf");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.GetWeaponSocket
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_EquipmentMenuPawn_Foundling_C::GetWeaponSocket(enum class EComboTypes Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "GetWeaponSocket");

	Params::ABP_EquipmentMenuPawn_Foundling_C_GetWeaponSocket_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.SetWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Foundling_C::SetWeaponVisibility(bool IsVisible_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "SetWeaponVisibility");

	Params::ABP_EquipmentMenuPawn_Foundling_C_SetWeaponVisibility_Params Parms{};

	Parms.IsVisible_ = IsVisible_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.Mannequin_SetWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetWeaponSocket_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_EquipmentMenuPawn_Foundling_C::Mannequin_SetWeapon(enum class EComboTypes Selection, class FName CallFunc_GetWeaponSocket_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, class FName CallFunc_GetWeaponSocket_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class FName CallFunc_GetWeaponSocket_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, class FName CallFunc_GetWeaponSocket_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_5, class FName CallFunc_GetWeaponSocket_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_6, class FName CallFunc_GetWeaponSocket_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "Mannequin_SetWeapon");

	Params::ABP_EquipmentMenuPawn_Foundling_C_Mannequin_SetWeapon_Params Parms{};

	Parms.Selection = Selection;
	Parms.CallFunc_GetWeaponSocket_ReturnValue = CallFunc_GetWeaponSocket_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_1 = CallFunc_GetWeaponSocket_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_2 = CallFunc_GetWeaponSocket_ReturnValue_2;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_3 = CallFunc_GetWeaponSocket_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_5 = CallFunc_K2_AttachToComponent_ReturnValue_5;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_4 = CallFunc_GetWeaponSocket_ReturnValue_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_6 = CallFunc_K2_AttachToComponent_ReturnValue_6;
	Parms.CallFunc_GetWeaponSocket_ReturnValue_5 = CallFunc_GetWeaponSocket_ReturnValue_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_7 = CallFunc_K2_AttachToComponent_ReturnValue_7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.CalcCursorLookAtLocation
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

void ABP_EquipmentMenuPawn_Foundling_C::CalcCursorLookAtLocation(const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float CallFunc_GetMousePosition_LocationX, float CallFunc_GetMousePosition_LocationY, bool CallFunc_GetMousePosition_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldPosition, const struct FVector& CallFunc_DeprojectScreenToWorld_WorldDirection, bool CallFunc_DeprojectScreenToWorld_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_LinePlaneIntersection_OriginNormal_T, const struct FVector& CallFunc_LinePlaneIntersection_OriginNormal_Intersection, bool CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "CalcCursorLookAtLocation");

	Params::ABP_EquipmentMenuPawn_Foundling_C_CalcCursorLookAtLocation_Params Parms{};

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


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.Mannequin_SetDarkForm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Foundling_C::Mannequin_SetDarkForm(class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "Mannequin_SetDarkForm");

	Params::ABP_EquipmentMenuPawn_Foundling_C_Mannequin_SetDarkForm_Params Parms{};

	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Foundling_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Foundling_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "ReceiveActorBeginOverlap");

	Params::ABP_EquipmentMenuPawn_Foundling_C_ReceiveActorBeginOverlap_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Foundling_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "ReceiveTick");

	Params::ABP_EquipmentMenuPawn_Foundling_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.Event_CustomPossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Foundling_C::Event_CustomPossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "Event_CustomPossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.Event_CustomUnpossess
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EquipmentMenuPawn_Foundling_C::Event_CustomUnpossess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "Event_CustomUnpossess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EquipmentMenuPawn_Foundling.BP_EquipmentMenuPawn_Foundling_C.ExecuteUbergraph_BP_EquipmentMenuPawn_Foundling
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Event_OtherActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EquipmentMenuPawn_Foundling_C::ExecuteUbergraph_BP_EquipmentMenuPawn_Foundling(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Event_OtherActor, float K2Node_Event_DeltaSeconds, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquipmentMenuPawn_Foundling_C", "ExecuteUbergraph_BP_EquipmentMenuPawn_Foundling");

	Params::ABP_EquipmentMenuPawn_Foundling_C_ExecuteUbergraph_BP_EquipmentMenuPawn_Foundling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_OtherActor = K2Node_Event_OtherActor;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


