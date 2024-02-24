#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_QuestMarker.BP_QuestMarker_C
// (Actor)

class UClass* ABP_QuestMarker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_QuestMarker_C");

	return Clss;
}


// BP_QuestMarker_C BP_QuestMarker.Default__BP_QuestMarker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_QuestMarker_C* ABP_QuestMarker_C::GetDefaultObj()
{
	static class ABP_QuestMarker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_QuestMarker_C*>(ABP_QuestMarker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_QuestMarker.BP_QuestMarker_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_QuestMarker_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestMarker_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestMarker.BP_QuestMarker_C.AddMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_QuestMarker_C::AddMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestMarker_C", "AddMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestMarker.BP_QuestMarker_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_QuestMarker_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestMarker_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_QuestMarker.BP_QuestMarker_C.ExecuteUbergraph_BP_QuestMarker
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_MarkerType>    K2Node_MakeArray_Array                                           (ReferenceParm)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_CompassMarker_C*         CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_MarkerData               K2Node_MakeStruct_S_MarkerData                                   (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_QuestMarker_C*>    CallFunc_Add_Quest_Marker_Markers                                (ReferenceParm, ContainsInstancedReference)
// class UBPC_MinimapSystem_C*        CallFunc_Get_Minimap_Component_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UW_QuestMarker_C*            CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_QuestMarker_C::ExecuteUbergraph_BP_QuestMarker(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CompassMarker_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TArray<class UW_QuestMarker_C*>& CallFunc_Add_Quest_Marker_Markers, class UBPC_MinimapSystem_C* CallFunc_Get_Minimap_Component_ReturnValue_1, class UW_QuestMarker_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_QuestMarker_C", "ExecuteUbergraph_BP_QuestMarker");

	Params::ABP_QuestMarker_C_ExecuteUbergraph_BP_QuestMarker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue = CallFunc_Get_Minimap_Component_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_MakeStruct_S_MarkerData = K2Node_MakeStruct_S_MarkerData;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Add_Quest_Marker_Markers = CallFunc_Add_Quest_Marker_Markers;
	Parms.CallFunc_Get_Minimap_Component_ReturnValue_1 = CallFunc_Get_Minimap_Component_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


