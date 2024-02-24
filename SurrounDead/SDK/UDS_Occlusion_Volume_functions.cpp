#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UDS_Occlusion_Volume.UDS_Occlusion_Volume_C
// (Actor)

class UClass* AUDS_Occlusion_Volume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UDS_Occlusion_Volume_C");

	return Clss;
}


// UDS_Occlusion_Volume_C UDS_Occlusion_Volume.Default__UDS_Occlusion_Volume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUDS_Occlusion_Volume_C* AUDS_Occlusion_Volume_C::GetDefaultObj()
{
	static class AUDS_Occlusion_Volume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUDS_Occlusion_Volume_C*>(AUDS_Occlusion_Volume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.Get Occlusion Result
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Weather                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Occluded                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUDS_Occlusion_Volume_C::Get_Occlusion_Result(bool Weather, bool* Occluded, bool Temp_bool_Variable, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UDS_Occlusion_Volume_C", "Get Occlusion Result");

	Params::AUDS_Occlusion_Volume_C_Get_Occlusion_Result_Params Parms{};

	Parms.Weather = Weather;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Occluded != nullptr)
		*Occluded = Parms.Occluded;

}


// Function UDS_Occlusion_Volume.UDS_Occlusion_Volume_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*               CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USphereComponent*            CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUltra_Dynamic_Weather_Interface_C>K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionChannel       CallFunc_Get_Weather_Particle_Collision_Channel_Channel          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_2                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCapsuleComponent*           CallFunc_AddComponent_ReturnValue_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCapsuleRadius_Radius_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AUDS_Occlusion_Volume_C::UserConstructionScript(const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UBoxComponent* CallFunc_AddComponent_ReturnValue, class USphereComponent* CallFunc_AddComponent_ReturnValue_1, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TScriptInterface<class IUltra_Dynamic_Weather_Interface_C> K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface, bool K2Node_DynamicCast_bSuccess, enum class ECollisionChannel CallFunc_Get_Weather_Particle_Collision_Channel_Channel, const struct FTransform& Temp_struct_Variable_2, class UCapsuleComponent* CallFunc_AddComponent_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_SetCapsuleRadius_Radius_ImplicitCast, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UDS_Occlusion_Volume_C", "UserConstructionScript");

	Params::AUDS_Occlusion_Volume_C_UserConstructionScript_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface = K2Node_DynamicCast_AsUltra_Dynamic_Weather_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Get_Weather_Particle_Collision_Channel_Channel = CallFunc_Get_Weather_Particle_Collision_Channel_Channel;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.CallFunc_AddComponent_ReturnValue_2 = CallFunc_AddComponent_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_SetCapsuleRadius_Radius_ImplicitCast = CallFunc_SetCapsuleRadius_Radius_ImplicitCast;
	Parms.CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast = CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


