#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HitReactionLayer_DeathByVehicle.HitReactionLayer_DeathByVehicle_C
// (None)

class UClass* UHitReactionLayer_DeathByVehicle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HitReactionLayer_DeathByVehicle_C");

	return Clss;
}


// HitReactionLayer_DeathByVehicle_C HitReactionLayer_DeathByVehicle.Default__HitReactionLayer_DeathByVehicle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHitReactionLayer_DeathByVehicle_C* UHitReactionLayer_DeathByVehicle_C::GetDefaultObj()
{
	static class UHitReactionLayer_DeathByVehicle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHitReactionLayer_DeathByVehicle_C*>(UHitReactionLayer_DeathByVehicle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HitReactionLayer_DeathByVehicle.HitReactionLayer_DeathByVehicle_C.EvaluateTag
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDamageComponent*            Receiver                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageCauserComponent*      Causer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageAmount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxDamageType*              DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageSource*               DamageSource                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitRegionData*              HitRegion                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Force                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitReactionTag*             PreviousTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHitReactionTag*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageSource_Vehicle_C*     K2Node_DynamicCast_AsDamage_Source_Vehicle                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

class UHitReactionTag* UHitReactionLayer_DeathByVehicle_C::EvaluateTag(class UDamageComponent* Receiver, class UDamageCauserComponent* Causer, float DamageAmount, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class UHitRegionData* HitRegion, float Force, class UHitReactionTag* PreviousTag, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UDamageSource_Vehicle_C* K2Node_DynamicCast_AsDamage_Source_Vehicle, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HitReactionLayer_DeathByVehicle_C", "EvaluateTag");

	Params::UHitReactionLayer_DeathByVehicle_C_EvaluateTag_Params Parms{};

	Parms.Receiver = Receiver;
	Parms.Causer = Causer;
	Parms.DamageAmount = DamageAmount;
	Parms.DamageType = DamageType;
	Parms.DamageSource = DamageSource;
	Parms.HitRegion = HitRegion;
	Parms.Force = Force;
	Parms.PreviousTag = PreviousTag;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsDamage_Source_Vehicle = K2Node_DynamicCast_AsDamage_Source_Vehicle;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


