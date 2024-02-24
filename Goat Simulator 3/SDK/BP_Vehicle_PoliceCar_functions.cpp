#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C
// (Actor, Pawn)

class UClass* ABP_Vehicle_PoliceCar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Vehicle_PoliceCar_C");

	return Clss;
}


// BP_Vehicle_PoliceCar_C BP_Vehicle_PoliceCar.Default__BP_Vehicle_PoliceCar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Vehicle_PoliceCar_C* ABP_Vehicle_PoliceCar_C::GetDefaultObj()
{
	static class ABP_Vehicle_PoliceCar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Vehicle_PoliceCar_C*>(ABP_Vehicle_PoliceCar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.SpawnPolicePassengers
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TargetActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasPolicePassenger                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_PoliceCar_C::SpawnPolicePassengers(class AActor* TargetActor, bool HasPolicePassenger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_PoliceCar_C", "SpawnPolicePassengers");

	Params::ABP_Vehicle_PoliceCar_C_SpawnPolicePassengers_Params Parms{};

	Parms.TargetActor = TargetActor;
	Parms.HasPolicePassenger = HasPolicePassenger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.FindSirenMeshComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        SirenMeshComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UStaticMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_PoliceCar_C::FindSirenMeshComponent(class UStaticMeshComponent** SirenMeshComponent, bool* IsValid, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UStaticMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UStaticMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_PoliceCar_C", "FindSirenMeshComponent");

	Params::ABP_Vehicle_PoliceCar_C_FindSirenMeshComponent_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SirenMeshComponent != nullptr)
		*SirenMeshComponent = Parms.SirenMeshComponent;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.ToggleSirenMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               EnableSirens                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaticMeshComponent*        CallFunc_FindSirenMeshComponent_SirenMeshComponent               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindSirenMeshComponent_IsValid                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_PoliceCar_C::ToggleSirenMaterial(bool Enabled, bool EnableSirens, class UStaticMeshComponent* CallFunc_FindSirenMeshComponent_SirenMeshComponent, bool CallFunc_FindSirenMeshComponent_IsValid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_PoliceCar_C", "ToggleSirenMaterial");

	Params::ABP_Vehicle_PoliceCar_C_ToggleSirenMaterial_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.EnableSirens = EnableSirens;
	Parms.CallFunc_FindSirenMeshComponent_SirenMeshComponent = CallFunc_FindSirenMeshComponent_SirenMeshComponent;
	Parms.CallFunc_FindSirenMeshComponent_IsValid = CallFunc_FindSirenMeshComponent_IsValid;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.CharacterEnter
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGGCharacter*                Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AsPassanger                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlacedFromManager                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_PoliceCar_C::CharacterEnter(class AGGCharacter* Character, bool AsPassanger, bool PlacedFromManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_PoliceCar_C", "CharacterEnter");

	Params::ABP_Vehicle_PoliceCar_C_CharacterEnter_Params Parms{};

	Parms.Character = Character;
	Parms.AsPassanger = AsPassanger;
	Parms.PlacedFromManager = PlacedFromManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.ToggleSiren
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSirenEnabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Vehicle_PoliceCar_C::ToggleSiren(bool bSirenEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_PoliceCar_C", "ToggleSiren");

	Params::ABP_Vehicle_PoliceCar_C_ToggleSiren_Params Parms{};

	Parms.bSirenEnabled = bSirenEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Vehicle_PoliceCar.BP_Vehicle_PoliceCar_C.ExecuteUbergraph_BP_Vehicle_PoliceCar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGGCharacter*                K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_AsPassanger                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_PlacedFromManager                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_GGNPC_Police_C*          K2Node_DynamicCast_AsBP_GGNPC_Police                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSirenEnabled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlaying_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Vehicle_PoliceCar_C::ExecuteUbergraph_BP_Vehicle_PoliceCar(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, class AGGCharacter* K2Node_Event_Character, bool K2Node_Event_AsPassanger, bool K2Node_Event_PlacedFromManager, class FName CallFunc_MakeLiteralName_ReturnValue_1, class ABP_GGNPC_Police_C* K2Node_DynamicCast_AsBP_GGNPC_Police, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bSirenEnabled, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Vehicle_PoliceCar_C", "ExecuteUbergraph_BP_Vehicle_PoliceCar");

	Params::ABP_Vehicle_PoliceCar_C_ExecuteUbergraph_BP_Vehicle_PoliceCar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_AsPassanger = K2Node_Event_AsPassanger;
	Parms.K2Node_Event_PlacedFromManager = K2Node_Event_PlacedFromManager;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_GGNPC_Police = K2Node_DynamicCast_AsBP_GGNPC_Police;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bSirenEnabled = K2Node_Event_bSirenEnabled;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsPlaying_ReturnValue = CallFunc_IsPlaying_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


