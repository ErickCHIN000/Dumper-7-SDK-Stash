#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EquipmentCharacter.EquipmentCharacter_C
// (Actor, Pawn)

class UClass* AEquipmentCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquipmentCharacter_C");

	return Clss;
}


// EquipmentCharacter_C EquipmentCharacter.Default__EquipmentCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEquipmentCharacter_C* AEquipmentCharacter_C::GetDefaultObj()
{
	static class AEquipmentCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEquipmentCharacter_C*>(AEquipmentCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EquipmentCharacter.EquipmentCharacter_C.OnKatanasToAxe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnKatanasToAxe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnKatanasToAxe");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnMainHandWeaponChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnMainHandWeaponChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnMainHandWeaponChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_OffHandMesh
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEquipmentSockets           LocalEquipmentSockets                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEquipmentCharacter_C::OnRep_OffHandMesh(const struct FEquipmentSockets& LocalEquipmentSockets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_OffHandMesh");

	Params::AEquipmentCharacter_C_OnRep_OffHandMesh_Params Parms{};

	Parms.LocalEquipmentSockets = LocalEquipmentSockets;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_MainHandMesh
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketToUse                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEquipmentSockets           LocalEquipmentSockets                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetMainHandWeapon_EquippedMainHandWeapon                (HasGetValueTypeHash)
// bool                               CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEquipmentCharacter_C::OnRep_MainHandMesh(class FName Local_ID, class FName SocketToUse, const struct FEquipmentSockets& LocalEquipmentSockets, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UMaterialInterface* Temp_object_Variable_2, class UMaterialInterface* Temp_object_Variable_3, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes, class UMaterialInterface* K2Node_Select_Default, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue_3, bool CallFunc_K2_AttachToComponent_ReturnValue_4, bool CallFunc_K2_AttachToComponent_ReturnValue_5, bool CallFunc_K2_AttachToComponent_ReturnValue_6, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes_1, class UMaterialInterface* K2Node_Select_Default_1, bool CallFunc_K2_AttachToComponent_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_MainHandMesh");

	Params::AEquipmentCharacter_C_OnRep_MainHandMesh_Params Parms{};

	Parms.Local_ID = Local_ID;
	Parms.SocketToUse = SocketToUse;
	Parms.LocalEquipmentSockets = LocalEquipmentSockets;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes = CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_3 = CallFunc_K2_AttachToComponent_ReturnValue_3;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_4 = CallFunc_K2_AttachToComponent_ReturnValue_4;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_5 = CallFunc_K2_AttachToComponent_ReturnValue_5;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_6 = CallFunc_K2_AttachToComponent_ReturnValue_6;
	Parms.CallFunc_GetMainHandWeapon_EquippedMainHandWeapon = CallFunc_GetMainHandWeapon_EquippedMainHandWeapon;
	Parms.CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes_1 = CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_7 = CallFunc_K2_AttachToComponent_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_LeftRingMesh
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEquipmentSockets           LocalEquipmentSockets                                            (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEquipmentCharacter_C::OnRep_LeftRingMesh(const struct FEquipmentSockets& LocalEquipmentSockets, bool CallFunc_K2_AttachTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_LeftRingMesh");

	Params::AEquipmentCharacter_C_OnRep_LeftRingMesh_Params Parms{};

	Parms.LocalEquipmentSockets = LocalEquipmentSockets;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_RightRingMesh
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FEquipmentSockets           LocalEquipmentSlots                                              (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachTo_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEquipmentCharacter_C::OnRep_RightRingMesh(const struct FEquipmentSockets& LocalEquipmentSlots, bool CallFunc_K2_AttachTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_RightRingMesh");

	Params::AEquipmentCharacter_C_OnRep_RightRingMesh_Params Parms{};

	Parms.LocalEquipmentSlots = LocalEquipmentSlots;
	Parms.CallFunc_K2_AttachTo_ReturnValue = CallFunc_K2_AttachTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_AccessoryMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_AccessoryMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_AccessoryMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_WaistMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_WaistMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_WaistMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_BackMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_BackMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_BackMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_FeetMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_FeetMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_FeetMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_LegsMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_LegsMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_LegsMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_HandsMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_HandsMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_HandsMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_ChestMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_ChestMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_ChestMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_ShoulderMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_ShoulderMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_ShoulderMesh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EquipmentCharacter.EquipmentCharacter_C.OnRep_HeadMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEquipmentCharacter_C::OnRep_HeadMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquipmentCharacter_C", "OnRep_HeadMesh");



	UObject::ProcessEvent(Func, nullptr);

}

}


