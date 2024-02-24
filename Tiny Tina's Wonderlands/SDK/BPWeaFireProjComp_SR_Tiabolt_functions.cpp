#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C
// (None)

class UClass* UBPWeaFireProjComp_SR_Tiabolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeaFireProjComp_SR_Tiabolt_C");

	return Clss;
}


// BPWeaFireProjComp_SR_Tiabolt_C BPWeaFireProjComp_SR_Tiabolt.Default__BPWeaFireProjComp_SR_Tiabolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWeaFireProjComp_SR_Tiabolt_C* UBPWeaFireProjComp_SR_Tiabolt_C::GetDefaultObj()
{
	static class UBPWeaFireProjComp_SR_Tiabolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWeaFireProjComp_SR_Tiabolt_C*>(UBPWeaFireProjComp_SR_Tiabolt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C.UpdateDamageType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      New_Damage_Type                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeaponRegisterAttachmentEffectDataK2Node_MakeStruct_WeaponRegisterAttachmentEffectData             (NoDestructor)

void UBPWeaFireProjComp_SR_Tiabolt_C::UpdateDamageType(class UClass* New_Damage_Type, class UParticleSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWeaponRegisterAttachmentEffectData& K2Node_MakeStruct_WeaponRegisterAttachmentEffectData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaFireProjComp_SR_Tiabolt_C", "UpdateDamageType");

	Params::UBPWeaFireProjComp_SR_Tiabolt_C_UpdateDamageType_Params Parms{};

	Parms.New_Damage_Type = New_Damage_Type;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeStruct_WeaponRegisterAttachmentEffectData = K2Node_MakeStruct_WeaponRegisterAttachmentEffectData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPWeaFireProjComp_SR_Tiabolt_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaFireProjComp_SR_Tiabolt_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeaFireProjComp_SR_Tiabolt.BPWeaFireProjComp_SR_Tiabolt_C.ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABPWeap_SR_DAL_Tiabolt_C*    K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBPWeaFireProjComp_SR_Tiabolt_C::ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABPWeap_SR_DAL_Tiabolt_C* K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeaFireProjComp_SR_Tiabolt_C", "ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt");

	Params::UBPWeaFireProjComp_SR_Tiabolt_C_ExecuteUbergraph_BPWeaFireProjComp_SR_Tiabolt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt = K2Node_DynamicCast_AsBPWeap_SR_DAL_Tiabolt;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


