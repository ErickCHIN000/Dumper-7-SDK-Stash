#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseCharacter.BaseCharacter_C
// (Actor, Pawn)

class UClass* ABaseCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseCharacter_C");

	return Clss;
}


// BaseCharacter_C BaseCharacter.Default__BaseCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseCharacter_C* ABaseCharacter_C::GetDefaultObj()
{
	static class ABaseCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseCharacter_C*>(ABaseCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseCharacter.BaseCharacter_C.GetCloseRangeWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACloseRangeWeaponCommon_C*   CloseRangeWeapon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACloseRangeWeaponCommon_C*   K2Node_DynamicCast_AsClose_Range_Weapon_Common                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::GetCloseRangeWeapon(bool IsLeft, class ACloseRangeWeaponCommon_C** CloseRangeWeapon, bool CallFunc_IsValid_ReturnValue, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_BoolBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetCloseRangeWeapon");

	Params::ABaseCharacter_C_GetCloseRangeWeapon_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsClose_Range_Weapon_Common = K2Node_DynamicCast_AsClose_Range_Weapon_Common;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CloseRangeWeapon != nullptr)
		*CloseRangeWeapon = Parms.CloseRangeWeapon;

}


// Function BaseCharacter.BaseCharacter_C.AttachShoulderWeaponRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AttachShoulderWeaponRight(class USceneComponent* WeaponMesh, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AttachShoulderWeaponRight");

	Params::ABaseCharacter_C_AttachShoulderWeaponRight_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnRep_LongRangeWeaponOnLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::OnRep_LongRangeWeaponOnLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnRep_LongRangeWeaponOnLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.SetupCurrentWeaponsBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NeedsRegisterMultiList                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SetupCurrentWeaponsBP(bool NeedsRegisterMultiList, bool Temp_bool_Variable, class ATTLWeaponBase* Temp_object_Variable, bool Temp_bool_Variable1, class ATTLWeaponBase* Temp_object_Variable1, bool Temp_bool_Variable2, bool Temp_bool_Variable3, bool Temp_bool_Variable4, bool Temp_bool_Variable5, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class ATTLWeaponBase* K2Node_Select_Default, class ATTLWeaponBase* K2Node_Select1_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, class ATTLWeaponBase* K2Node_Select2_Default, class ATTLWeaponBase* K2Node_Select3_Default, class ATTLWeaponBase* K2Node_Select4_Default, class ATTLWeaponBase* K2Node_Select5_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetupCurrentWeaponsBP");

	Params::ABaseCharacter_C_SetupCurrentWeaponsBP_Params Parms{};

	Parms.NeedsRegisterMultiList = NeedsRegisterMultiList;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.Temp_bool_Variable5 = Temp_bool_Variable5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue1 = CallFunc_BooleanAND_ReturnValue1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.IsWeaponLeftVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsVisibility                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArmWeaponVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::IsWeaponLeftVisibility(bool* IsVisibility, bool Result, bool CallFunc_IsArmWeaponVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IsWeaponLeftVisibility");

	Params::ABaseCharacter_C_IsWeaponLeftVisibility_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_IsArmWeaponVisible_ReturnValue = CallFunc_IsArmWeaponVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisibility != nullptr)
		*IsVisibility = Parms.IsVisibility;

}


// Function BaseCharacter.BaseCharacter_C.ChangeAffiliation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETTLEStatusType         NewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTTLAIActionComponent*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionChannel       Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::ChangeAffiliation(enum class ETTLEStatusType NewStatus, enum class ECollisionChannel Temp_byte_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue1, class UTTLAIActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue3, enum class ECollisionChannel Temp_byte_Variable1, enum class ECollisionChannel K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ChangeAffiliation");

	Params::ABaseCharacter_C_ChangeAffiliation_Params Parms{};

	Parms.NewStatus = NewStatus;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue1 = CallFunc_EqualEqual_ByteByte_ReturnValue1;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetWeaponLeftVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SetWeaponLeftVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetWeaponLeftVisibility");

	Params::ABaseCharacter_C_SetWeaponLeftVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.GetMeshForShoulderWeaponLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetMeshForShoulderWeaponLeft(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetMeshForShoulderWeaponLeft");

	Params::ABaseCharacter_C_GetMeshForShoulderWeaponLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BaseCharacter.BaseCharacter_C.GetMeshForWeaponRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetMeshForWeaponRight(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetMeshForWeaponRight");

	Params::ABaseCharacter_C_GetMeshForWeaponRight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BaseCharacter.BaseCharacter_C.GetMeshForWeaponLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::GetMeshForWeaponLeft(class USkeletalMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "GetMeshForWeaponLeft");

	Params::ABaseCharacter_C_GetMeshForWeaponLeft_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function BaseCharacter.BaseCharacter_C.AttachShoulderWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATTLWeaponBase*              Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::AttachShoulderWeapon(class ATTLWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AttachShoulderWeapon");

	Params::ABaseCharacter_C_AttachShoulderWeapon_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AttachCloseRangeWeaponRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AttachCloseRangeWeaponRight(class USceneComponent* WeaponMesh, class FName SocketName, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AttachCloseRangeWeaponRight");

	Params::ABaseCharacter_C_AttachCloseRangeWeaponRight_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.SocketName = SocketName;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AttachLongRangeWeaponRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AttachLongRangeWeaponRight(class USceneComponent* WeaponMesh, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AttachLongRangeWeaponRight");

	Params::ABaseCharacter_C_AttachLongRangeWeaponRight_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AttachCloseRangeWeaponLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AttachCloseRangeWeaponLeft(class USceneComponent* WeaponMesh, class FName SocketName, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AttachCloseRangeWeaponLeft");

	Params::ABaseCharacter_C_AttachCloseRangeWeaponLeft_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.SocketName = SocketName;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.AttachLongRangeWeaponLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             WeaponMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::AttachLongRangeWeaponLeft(class USceneComponent* WeaponMesh, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "AttachLongRangeWeaponLeft");

	Params::ABaseCharacter_C_AttachLongRangeWeaponLeft_Params Parms{};

	Parms.WeaponMesh = WeaponMesh;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.IsReload
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               _Result                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReloading_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::IsReload(bool IsLeft, bool* Result, bool _Result, bool CallFunc_IsReloading_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IsReload");

	Params::ABaseCharacter_C_IsReload_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms._Result = _Result;
	Parms.CallFunc_IsReloading_ReturnValue = CallFunc_IsReloading_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BaseCharacter.BaseCharacter_C.UpdateEnableLockonAndReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsAming                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsOverHeat                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::UpdateEnableLockonAndReticle(bool IsAming, bool IsOverHeat, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UpdateEnableLockonAndReticle");

	Params::ABaseCharacter_C_UpdateEnableLockonAndReticle_Params Parms{};

	Parms.IsAming = IsAming;
	Parms.IsOverHeat = IsOverHeat;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.IsWeaponRightVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsVisivility                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Result                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsArmWeaponVisible_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::IsWeaponRightVisibility(bool* IsVisivility, bool Result, bool CallFunc_IsArmWeaponVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "IsWeaponRightVisibility");

	Params::ABaseCharacter_C_IsWeaponRightVisibility_Params Parms{};

	Parms.Result = Result;
	Parms.CallFunc_IsArmWeaponVisible_ReturnValue = CallFunc_IsArmWeaponVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsVisivility != nullptr)
		*IsVisivility = Parms.IsVisivility;

}


// Function BaseCharacter.BaseCharacter_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentRightWeapon_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_GetCurrentLeftWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLShoulderWeaponBase*      K2Node_DynamicCast_AsTTLShoulder_Weapon_Base                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACloseRangeWeaponCommon_C*   K2Node_DynamicCast_AsClose_Range_Weapon_Common                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALongRangeWeaponCommon_C*    K2Node_DynamicCast_AsLong_Range_Weapon_Common                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACloseRangeWeaponCommon_C*   K2Node_DynamicCast_AsClose_Range_Weapon_Common1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ALongRangeWeaponCommon_C*    K2Node_DynamicCast_AsLong_Range_Weapon_Common1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponShield*            K2Node_DynamicCast_AsTTLWeapon_Shield                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetCollisionByCharacterType_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponShield*            K2Node_DynamicCast_AsTTLWeapon_Shield1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess6                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult2                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANewAimCamera_C*             CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult3                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidClass_ReturnValue7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              CallFunc_SpawnCharacterWeapon_ReturnValue7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLSupportWeaponBase*       K2Node_DynamicCast_AsTTLSupport_Weapon_Base                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess7                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue6                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::Initialize(bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult1, bool CallFunc_K2_SetActorTransform_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue1, bool CallFunc_IsValidClass_ReturnValue2, bool CallFunc_NotEqual_ClassClass_ReturnValue1, bool CallFunc_NotEqual_ClassClass_ReturnValue2, bool CallFunc_IsValidClass_ReturnValue3, bool CallFunc_NotEqual_ClassClass_ReturnValue3, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValidClass_ReturnValue4, bool CallFunc_NotEqual_ClassClass_ReturnValue4, class ATTLWeaponBase* CallFunc_GetCurrentRightWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue1, class ATTLWeaponBase* CallFunc_GetCurrentLeftWeapon_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue, class ATTLShoulderWeaponBase* K2Node_DynamicCast_AsTTLShoulder_Weapon_Base, bool K2Node_DynamicCast_bSuccess, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue1, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess1, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue2, class ALongRangeWeaponCommon_C* K2Node_DynamicCast_AsLong_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess2, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue3, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common1, bool K2Node_DynamicCast_bSuccess3, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue4, class ALongRangeWeaponCommon_C* K2Node_DynamicCast_AsLong_Range_Weapon_Common1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_HasAuthority_ReturnValue2, bool CallFunc_HasAuthority_ReturnValue3, bool CallFunc_IsValidClass_ReturnValue5, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue5, class ATTLWeaponShield* K2Node_DynamicCast_AsTTLWeapon_Shield, bool K2Node_DynamicCast_bSuccess5, bool CallFunc_NotEqual_ClassClass_ReturnValue5, bool CallFunc_HasAuthority_ReturnValue4, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_SetCollisionByCharacterType_ReturnValue, bool CallFunc_IsValidClass_ReturnValue6, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue6, class ATTLWeaponShield* K2Node_DynamicCast_AsTTLWeapon_Shield1, bool K2Node_DynamicCast_bSuccess6, bool CallFunc_NotEqual_ClassClass_ReturnValue6, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult2, bool CallFunc_K2_SetActorTransform_ReturnValue2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_HasAuthority_ReturnValue5, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ANewAimCamera_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult3, bool CallFunc_K2_SetActorTransform_ReturnValue3, bool CallFunc_IsValidClass_ReturnValue7, class ATTLWeaponBase* CallFunc_SpawnCharacterWeapon_ReturnValue7, class ATTLSupportWeaponBase* K2Node_DynamicCast_AsTTLSupport_Weapon_Base, bool K2Node_DynamicCast_bSuccess7, bool CallFunc_NotEqual_ClassClass_ReturnValue7, bool CallFunc_HasAuthority_ReturnValue6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "Initialize");

	Params::ABaseCharacter_C_Initialize_Params Parms{};

	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult1 = CallFunc_K2_SetActorTransform_SweepHitResult1;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue1 = CallFunc_K2_SetActorTransform_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue1 = CallFunc_IsValidClass_ReturnValue1;
	Parms.CallFunc_IsValidClass_ReturnValue2 = CallFunc_IsValidClass_ReturnValue2;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue1 = CallFunc_NotEqual_ClassClass_ReturnValue1;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue2 = CallFunc_NotEqual_ClassClass_ReturnValue2;
	Parms.CallFunc_IsValidClass_ReturnValue3 = CallFunc_IsValidClass_ReturnValue3;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue3 = CallFunc_NotEqual_ClassClass_ReturnValue3;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue4 = CallFunc_IsValidClass_ReturnValue4;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue4 = CallFunc_NotEqual_ClassClass_ReturnValue4;
	Parms.CallFunc_GetCurrentRightWeapon_ReturnValue = CallFunc_GetCurrentRightWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;
	Parms.CallFunc_GetCurrentLeftWeapon_ReturnValue = CallFunc_GetCurrentLeftWeapon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue = CallFunc_SpawnCharacterWeapon_ReturnValue;
	Parms.K2Node_DynamicCast_AsTTLShoulder_Weapon_Base = K2Node_DynamicCast_AsTTLShoulder_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue1 = CallFunc_SpawnCharacterWeapon_ReturnValue1;
	Parms.K2Node_DynamicCast_AsClose_Range_Weapon_Common = K2Node_DynamicCast_AsClose_Range_Weapon_Common;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue2 = CallFunc_SpawnCharacterWeapon_ReturnValue2;
	Parms.K2Node_DynamicCast_AsLong_Range_Weapon_Common = K2Node_DynamicCast_AsLong_Range_Weapon_Common;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue3 = CallFunc_SpawnCharacterWeapon_ReturnValue3;
	Parms.K2Node_DynamicCast_AsClose_Range_Weapon_Common1 = K2Node_DynamicCast_AsClose_Range_Weapon_Common1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue4 = CallFunc_SpawnCharacterWeapon_ReturnValue4;
	Parms.K2Node_DynamicCast_AsLong_Range_Weapon_Common1 = K2Node_DynamicCast_AsLong_Range_Weapon_Common1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_HasAuthority_ReturnValue2 = CallFunc_HasAuthority_ReturnValue2;
	Parms.CallFunc_HasAuthority_ReturnValue3 = CallFunc_HasAuthority_ReturnValue3;
	Parms.CallFunc_IsValidClass_ReturnValue5 = CallFunc_IsValidClass_ReturnValue5;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue5 = CallFunc_SpawnCharacterWeapon_ReturnValue5;
	Parms.K2Node_DynamicCast_AsTTLWeapon_Shield = K2Node_DynamicCast_AsTTLWeapon_Shield;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue5 = CallFunc_NotEqual_ClassClass_ReturnValue5;
	Parms.CallFunc_HasAuthority_ReturnValue4 = CallFunc_HasAuthority_ReturnValue4;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_SetCollisionByCharacterType_ReturnValue = CallFunc_SetCollisionByCharacterType_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue6 = CallFunc_IsValidClass_ReturnValue6;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue6 = CallFunc_SpawnCharacterWeapon_ReturnValue6;
	Parms.K2Node_DynamicCast_AsTTLWeapon_Shield1 = K2Node_DynamicCast_AsTTLWeapon_Shield1;
	Parms.K2Node_DynamicCast_bSuccess6 = K2Node_DynamicCast_bSuccess6;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue6 = CallFunc_NotEqual_ClassClass_ReturnValue6;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult2 = CallFunc_K2_SetActorTransform_SweepHitResult2;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue2 = CallFunc_K2_SetActorTransform_ReturnValue2;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue5 = CallFunc_HasAuthority_ReturnValue5;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult3 = CallFunc_K2_SetActorTransform_SweepHitResult3;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue3 = CallFunc_K2_SetActorTransform_ReturnValue3;
	Parms.CallFunc_IsValidClass_ReturnValue7 = CallFunc_IsValidClass_ReturnValue7;
	Parms.CallFunc_SpawnCharacterWeapon_ReturnValue7 = CallFunc_SpawnCharacterWeapon_ReturnValue7;
	Parms.K2Node_DynamicCast_AsTTLSupport_Weapon_Base = K2Node_DynamicCast_AsTTLSupport_Weapon_Base;
	Parms.K2Node_DynamicCast_bSuccess7 = K2Node_DynamicCast_bSuccess7;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue7 = CallFunc_NotEqual_ClassClass_ReturnValue7;
	Parms.CallFunc_HasAuthority_ReturnValue6 = CallFunc_HasAuthority_ReturnValue6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetWeaponRightVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::SetWeaponRightVisibility(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetWeaponRightVisibility");

	Params::ABaseCharacter_C_SetWeaponRightVisibility_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.CalcShootLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BulletSpeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NeedsCalcDeviation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     ShootLocation                                                    (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLockOn                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              TargetLength                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       TargetCharacter                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalcShootLocation_ShootLocation                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::CalcShootLocation(const struct FVector& MuzzleLocation, float BulletSpeed, bool NeedsCalcDeviation, struct FVector* ShootLocation, bool IsLockOn, float TargetLength, class APawn* TargetCharacter, const struct FVector& CallFunc_CalcShootLocation_ShootLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "CalcShootLocation");

	Params::ABaseCharacter_C_CalcShootLocation_Params Parms{};

	Parms.MuzzleLocation = MuzzleLocation;
	Parms.BulletSpeed = BulletSpeed;
	Parms.NeedsCalcDeviation = NeedsCalcDeviation;
	Parms.IsLockOn = IsLockOn;
	Parms.TargetLength = TargetLength;
	Parms.TargetCharacter = TargetCharacter;
	Parms.CallFunc_CalcShootLocation_ShootLocation = CallFunc_CalcShootLocation_ShootLocation;

	UObject::ProcessEvent(Func, &Parms);

	if (ShootLocation != nullptr)
		*ShootLocation = std::move(Parms.ShootLocation);

}


// Function BaseCharacter.BaseCharacter_C.UpdateCharacterUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::UpdateCharacterUI(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UpdateCharacterUI");

	Params::ABaseCharacter_C_UpdateCharacterUI_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnInputAttackRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnInputAttackRight(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInputAttackRight");

	Params::ABaseCharacter_C_OnInputAttackRight_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ServerLockonAimingParameter
// (Net, NetServer, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              PawnList                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                      TimerList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<float>                      ScoreList                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ABaseCharacter_C::ServerLockonAimingParameter(TArray<class AActor*>& PawnList, TArray<float>& TimerList, TArray<float>& ScoreList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ServerLockonAimingParameter");

	Params::ABaseCharacter_C_ServerLockonAimingParameter_Params Parms{};

	Parms.PawnList = PawnList;
	Parms.TimerList = TimerList;
	Parms.ScoreList = ScoreList;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ReloadEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ReloadEnd(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReloadEnd");

	Params::ABaseCharacter_C_ReloadEnd_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.OnPurgeEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsSkipTakeTime                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnPurgeEnd(bool IsLeft, bool IsSkipTakeTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnPurgeEnd");

	Params::ABaseCharacter_C_OnPurgeEnd_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.IsSkipTakeTime = IsSkipTakeTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnTakeEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnTakeEnd(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnTakeEnd");

	Params::ABaseCharacter_C_OnTakeEnd_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnInputAttackLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnInputAttackLeft(bool Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnInputAttackLeft");

	Params::ABaseCharacter_C_OnInputAttackLeft_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.StopAllUIComponentBP
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseCharacter_C::StopAllUIComponentBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "StopAllUIComponentBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseCharacter.BaseCharacter_C.FireBullet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::FireBullet(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "FireBullet");

	Params::ABaseCharacter_C_FireBullet_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnUnFireEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnUnFireEnd(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnUnFireEnd");

	Params::ABaseCharacter_C_OnUnFireEnd_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnPurgeCaughtWeaponEnd
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnPurgeCaughtWeaponEnd(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnPurgeCaughtWeaponEnd");

	Params::ABaseCharacter_C_OnPurgeCaughtWeaponEnd_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ClearWeaponActorBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ClearWeaponActorBP(bool IsLeft)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ClearWeaponActorBP");

	Params::ABaseCharacter_C_ClearWeaponActorBP_Params Parms{};

	Parms.IsLeft = IsLeft;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnDestroyed_¤ÙóÈ_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::OnDestroyed______0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnDestroyed_¤ÙóÈ_0");

	Params::ABaseCharacter_C_OnDestroyed______0_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.SetWeaponActorBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsLeft                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              LongWeapon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              CloseWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              ShiledWeapon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABaseCharacter_C::SetWeaponActorBP(bool IsLeft, class ATTLWeaponBase* LongWeapon, class ATTLWeaponBase* CloseWeapon, class ATTLWeaponBase* ShiledWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "SetWeaponActorBP");

	Params::ABaseCharacter_C_SetWeaponActorBP_Params Parms{};

	Parms.IsLeft = IsLeft;
	Parms.LongWeapon = LongWeapon;
	Parms.CloseWeapon = CloseWeapon;
	Parms.ShiledWeapon = ShiledWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABaseCharacter_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ReceiveHit");

	Params::ABaseCharacter_C_ReceiveHit_Params Parms{};

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnChangeSpectatorModeTargetBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsStart                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::OnChangeSpectatorModeTargetBP(bool IsStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnChangeSpectatorModeTargetBP");

	Params::ABaseCharacter_C_OnChangeSpectatorModeTargetBP_Params Parms{};

	Parms.IsStart = IsStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABaseCharacter_C::OnLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "OnLanded");

	Params::ABaseCharacter_C_OnLanded_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BaseCharacter.BaseCharacter_C.ExecuteUbergraph_BaseCharacter
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Pressed1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_CustomEvent_PawnList                                      (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<float>                      K2Node_CustomEvent_TimerList                                     (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<float>                      K2Node_CustomEvent_ScoreList                                     (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               K2Node_CustomEvent_IsLeft1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ReloadEndWeaponArm_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsLeft5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isSkipTakeTime                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsLeft4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Pressed                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsLeft                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FireWeaponArm_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsLeft3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsLeft2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isLeft1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DestroyedActor                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isLeft                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ATTLWeaponBase*              K2Node_Event_longWeapon                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Event_closeWeapon                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponBase*              K2Node_Event_shiledWeapon                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ATTLWeaponShield*            K2Node_DynamicCast_AsTTLWeapon_Shield                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACloseRangeWeaponCommon_C*   K2Node_DynamicCast_AsClose_Range_Weapon_Common                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALongRangeWeaponCommon_C*    K2Node_DynamicCast_AsLong_Range_Weapon_Common                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit1                                                (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isStart                                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseCharacter_C::ExecuteUbergraph_BaseCharacter(int32 EntryPoint, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_IsValid_ReturnValue4, bool K2Node_CustomEvent_Pressed1, TArray<class AActor*>& K2Node_CustomEvent_PawnList, TArray<float>& K2Node_CustomEvent_TimerList, TArray<float>& K2Node_CustomEvent_ScoreList, bool K2Node_CustomEvent_IsLeft1, bool CallFunc_ReloadEndWeaponArm_ReturnValue, bool CallFunc_IsValid_ReturnValue5, bool K2Node_Event_IsLeft5, bool K2Node_Event_isSkipTakeTime, bool K2Node_Event_IsLeft4, bool K2Node_CustomEvent_Pressed, bool K2Node_CustomEvent_IsLeft, bool CallFunc_IsValid_ReturnValue6, bool CallFunc_FireWeaponArm_ReturnValue, bool K2Node_Event_IsLeft3, bool K2Node_Event_IsLeft2, bool K2Node_Event_isLeft1, class AActor* K2Node_CustomEvent_DestroyedActor, bool K2Node_Event_isLeft, class ATTLWeaponBase* K2Node_Event_longWeapon, class ATTLWeaponBase* K2Node_Event_closeWeapon, class ATTLWeaponBase* K2Node_Event_shiledWeapon, class ATTLWeaponShield* K2Node_DynamicCast_AsTTLWeapon_Shield, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue7, class ACloseRangeWeaponCommon_C* K2Node_DynamicCast_AsClose_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess1, class ALongRangeWeaponCommon_C* K2Node_DynamicCast_AsLong_Range_Weapon_Common, bool K2Node_DynamicCast_bSuccess2, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit1, bool CallFunc_IsValid_ReturnValue8, bool K2Node_Event_isStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseCharacter_C", "ExecuteUbergraph_BaseCharacter");

	Params::ABaseCharacter_C_ExecuteUbergraph_BaseCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_IsValid_ReturnValue3 = CallFunc_IsValid_ReturnValue3;
	Parms.CallFunc_IsValid_ReturnValue4 = CallFunc_IsValid_ReturnValue4;
	Parms.K2Node_CustomEvent_Pressed1 = K2Node_CustomEvent_Pressed1;
	Parms.K2Node_CustomEvent_PawnList = K2Node_CustomEvent_PawnList;
	Parms.K2Node_CustomEvent_TimerList = K2Node_CustomEvent_TimerList;
	Parms.K2Node_CustomEvent_ScoreList = K2Node_CustomEvent_ScoreList;
	Parms.K2Node_CustomEvent_IsLeft1 = K2Node_CustomEvent_IsLeft1;
	Parms.CallFunc_ReloadEndWeaponArm_ReturnValue = CallFunc_ReloadEndWeaponArm_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue5 = CallFunc_IsValid_ReturnValue5;
	Parms.K2Node_Event_IsLeft5 = K2Node_Event_IsLeft5;
	Parms.K2Node_Event_isSkipTakeTime = K2Node_Event_isSkipTakeTime;
	Parms.K2Node_Event_IsLeft4 = K2Node_Event_IsLeft4;
	Parms.K2Node_CustomEvent_Pressed = K2Node_CustomEvent_Pressed;
	Parms.K2Node_CustomEvent_IsLeft = K2Node_CustomEvent_IsLeft;
	Parms.CallFunc_IsValid_ReturnValue6 = CallFunc_IsValid_ReturnValue6;
	Parms.CallFunc_FireWeaponArm_ReturnValue = CallFunc_FireWeaponArm_ReturnValue;
	Parms.K2Node_Event_IsLeft3 = K2Node_Event_IsLeft3;
	Parms.K2Node_Event_IsLeft2 = K2Node_Event_IsLeft2;
	Parms.K2Node_Event_isLeft1 = K2Node_Event_isLeft1;
	Parms.K2Node_CustomEvent_DestroyedActor = K2Node_CustomEvent_DestroyedActor;
	Parms.K2Node_Event_isLeft = K2Node_Event_isLeft;
	Parms.K2Node_Event_longWeapon = K2Node_Event_longWeapon;
	Parms.K2Node_Event_closeWeapon = K2Node_Event_closeWeapon;
	Parms.K2Node_Event_shiledWeapon = K2Node_Event_shiledWeapon;
	Parms.K2Node_DynamicCast_AsTTLWeapon_Shield = K2Node_DynamicCast_AsTTLWeapon_Shield;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue7 = CallFunc_IsValid_ReturnValue7;
	Parms.K2Node_DynamicCast_AsClose_Range_Weapon_Common = K2Node_DynamicCast_AsClose_Range_Weapon_Common;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.K2Node_DynamicCast_AsLong_Range_Weapon_Common = K2Node_DynamicCast_AsLong_Range_Weapon_Common;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit1 = K2Node_Event_Hit1;
	Parms.CallFunc_IsValid_ReturnValue8 = CallFunc_IsValid_ReturnValue8;
	Parms.K2Node_Event_isStart = K2Node_Event_isStart;

	UObject::ProcessEvent(Func, &Parms);

}

}


