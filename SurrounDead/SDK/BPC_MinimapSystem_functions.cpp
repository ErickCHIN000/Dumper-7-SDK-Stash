#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPC_MinimapSystem.BPC_MinimapSystem_C
// (None)

class UClass* UBPC_MinimapSystem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPC_MinimapSystem_C");

	return Clss;
}


// BPC_MinimapSystem_C BPC_MinimapSystem.Default__BPC_MinimapSystem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPC_MinimapSystem_C* UBPC_MinimapSystem_C::GetDefaultObj()
{
	static class UBPC_MinimapSystem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPC_MinimapSystem_C*>(UBPC_MinimapSystem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Remove Quest Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_QuestMarker_C*            Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ABP_QuestMarker_C*           Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Remove_Quest_Marker(class UW_QuestMarker_C* Marker, class ABP_QuestMarker_C* Actor, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Remove Quest Marker");

	Params::UBPC_MinimapSystem_C_Remove_Quest_Marker_Params Parms{};

	Parms.Marker = Marker;
	Parms.Actor = Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.SetMapVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::SetMapVisibility(enum class ESlateVisibility Visibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "SetMapVisibility");

	Params::UBPC_MinimapSystem_C_SetMapVisibility_Params Parms{};

	Parms.Visibility = Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Add Saved Player Marker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MarkerData               Marker_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_PlayerMarker_C*          Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlayerMarker_C*>   Markers                                                          (Parm, OutParm, ContainsInstancedReference)
// class UW_PlayerMarker_C*           L_Marker                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlayerMarker_C*>   L_Markers                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_MarkerData               L_Marker_Data                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_MarkerData               K2Node_MakeStruct_S_MarkerData                                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlayerMarker_C*           CallFunc_Add_Player_Marker_Return                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Add_Saved_Player_Marker(const struct FS_MarkerData& Marker_Data, class ABP_PlayerMarker_C* Target_Actor, int32 Index, TArray<class UW_PlayerMarker_C*>* Markers, class UW_PlayerMarker_C* L_Marker, const TArray<class UW_PlayerMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UW_PlayerMarker_C* CallFunc_Add_Player_Marker_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Add Saved Player Marker");

	Params::UBPC_MinimapSystem_C_Add_Saved_Player_Marker_Params Parms{};

	Parms.Marker_Data = Marker_Data;
	Parms.Target_Actor = Target_Actor;
	Parms.Index = Index;
	Parms.L_Marker = L_Marker;
	Parms.L_Markers = L_Markers;
	Parms.L_Marker_Data = L_Marker_Data;
	Parms.K2Node_MakeStruct_S_MarkerData = K2Node_MakeStruct_S_MarkerData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Add_Player_Marker_Return = CallFunc_Add_Player_Marker_Return;

	UObject::ProcessEvent(Func, &Parms);

	if (Markers != nullptr)
		*Markers = std::move(Parms.Markers);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Remove Player Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_PlayerMarker_C*           Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerMarker_C*          Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Remove_Player_Marker(class UW_PlayerMarker_C* Marker, int32 Index, class ABP_PlayerMarker_C* Actor, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Remove Player Marker");

	Params::UBPC_MinimapSystem_C_Remove_Player_Marker_Params Parms{};

	Parms.Marker = Marker;
	Parms.Index = Index;
	Parms.Actor = Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Add Player Marker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MarkerData               Marker_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_PlayerMarker_C*          Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlayerMarker_C*>   Markers                                                          (Parm, OutParm, ContainsInstancedReference)
// class UW_PlayerMarker_C*           L_Marker                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_PlayerMarker_C*>   L_Markers                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_MarkerData               L_Marker_Data                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FS_MarkerData               K2Node_MakeStruct_S_MarkerData                                   (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_PlayerMarker_C*           CallFunc_Add_Player_Marker_Return                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Add_Player_Marker(const struct FS_MarkerData& Marker_Data, class ABP_PlayerMarker_C* Target_Actor, TArray<class UW_PlayerMarker_C*>* Markers, class UW_PlayerMarker_C* L_Marker, const TArray<class UW_PlayerMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, const struct FS_MarkerData& K2Node_MakeStruct_S_MarkerData, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UW_PlayerMarker_C* CallFunc_Add_Player_Marker_Return, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Add Player Marker");

	Params::UBPC_MinimapSystem_C_Add_Player_Marker_Params Parms{};

	Parms.Marker_Data = Marker_Data;
	Parms.Target_Actor = Target_Actor;
	Parms.L_Marker = L_Marker;
	Parms.L_Markers = L_Markers;
	Parms.L_Marker_Data = L_Marker_Data;
	Parms.K2Node_MakeStruct_S_MarkerData = K2Node_MakeStruct_S_MarkerData;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_Player_Marker_Return = CallFunc_Add_Player_Marker_Return;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Markers != nullptr)
		*Markers = std::move(Parms.Markers);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Add Quest Marker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MarkerData               Marker_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class ABP_QuestMarker_C*           Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_QuestMarker_C*>    Markers                                                          (Parm, OutParm, ContainsInstancedReference)
// class UW_QuestMarker_C*            L_Marker                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_QuestMarker_C*>    L_Markers                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_MarkerData               L_Marker_Data                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MarkerType            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_MarkerType>    K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_QuestMarker_C*            CallFunc_Add_Quest_Marker_Return                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Add_Quest_Marker(const struct FS_MarkerData& Marker_Data, class ABP_QuestMarker_C* Target_Actor, TArray<class UW_QuestMarker_C*>* Markers, class UW_QuestMarker_C* L_Marker, const TArray<class UW_QuestMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class E_MarkerType CallFunc_Array_Get_Item, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class UW_QuestMarker_C* CallFunc_Add_Quest_Marker_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Add Quest Marker");

	Params::UBPC_MinimapSystem_C_Add_Quest_Marker_Params Parms{};

	Parms.Marker_Data = Marker_Data;
	Parms.Target_Actor = Target_Actor;
	Parms.L_Marker = L_Marker;
	Parms.L_Markers = L_Markers;
	Parms.L_Marker_Data = L_Marker_Data;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_Quest_Marker_Return = CallFunc_Add_Quest_Marker_Return;

	UObject::ProcessEvent(Func, &Parms);

	if (Markers != nullptr)
		*Markers = std::move(Parms.Markers);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Remove POI Marker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UW_POIMarker_C*              Marker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Remove_POI_Marker(class UW_POIMarker_C* Marker, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Remove POI Marker");

	Params::UBPC_MinimapSystem_C_Remove_POI_Marker_Params Parms{};

	Parms.Marker = Marker;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Marker Location
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Map_Location                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactPoint                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Marker_Location(const struct FVector2D& Map_Location, struct FVector* ImpactPoint, bool* Success, TArray<class AActor*>& Temp_object_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Marker Location");

	Params::UBPC_MinimapSystem_C_Marker_Location_Params Parms{};

	Parms.Map_Location = Map_Location;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;

	UObject::ProcessEvent(Func, &Parms);

	if (ImpactPoint != nullptr)
		*ImpactPoint = std::move(Parms.ImpactPoint);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Add POI Marker
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_MarkerData               Marker_Data                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                      Target_Actor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_POIMarker_C*>      Markers                                                          (Parm, OutParm, ContainsInstancedReference)
// class UW_POIMarker_C*              L_Marker                                                         (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UW_POIMarker_C*>      L_Markers                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FS_MarkerData               L_Marker_Data                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_MarkerType            CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class E_MarkerType>    K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UW_POIMarker_C*              CallFunc_Add_POI_Marker_Return                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Add_POI_Marker(const struct FS_MarkerData& Marker_Data, class AActor* Target_Actor, TArray<class UW_POIMarker_C*>* Markers, class UW_POIMarker_C* L_Marker, const TArray<class UW_POIMarker_C*>& L_Markers, const struct FS_MarkerData& L_Marker_Data, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class E_MarkerType CallFunc_Array_Get_Item, TArray<enum class E_MarkerType>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UW_POIMarker_C* CallFunc_Add_POI_Marker_Return)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Add POI Marker");

	Params::UBPC_MinimapSystem_C_Add_POI_Marker_Params Parms{};

	Parms.Marker_Data = Marker_Data;
	Parms.Target_Actor = Target_Actor;
	Parms.L_Marker = L_Marker;
	Parms.L_Markers = L_Markers;
	Parms.L_Marker_Data = L_Marker_Data;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_POI_Marker_Return = CallFunc_Add_POI_Marker_Return;

	UObject::ProcessEvent(Func, &Parms);

	if (Markers != nullptr)
		*Markers = std::move(Parms.Markers);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBPC_MinimapSystem_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Toggle Bigmap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPC_MinimapSystem_C::Toggle_Bigmap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Toggle Bigmap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.SERVER Spawn Player Marker
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Hit_Location                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::SERVER_Spawn_Player_Marker(const struct FVector& Hit_Location, bool Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "SERVER Spawn Player Marker");

	Params::UBPC_MinimapSystem_C_SERVER_Spawn_Player_Marker_Params Parms{};

	Parms.Hit_Location = Hit_Location;
	Parms.Success = Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Zoom Map
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Zoom_Map(double Val)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Zoom Map");

	Params::UBPC_MinimapSystem_C_Zoom_Map_Params Parms{};

	Parms.Val = Val;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Event_ConstructMap
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBPC_MinimapSystem_C::Event_ConstructMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Event_ConstructMap");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.Create Checkpoint Marker
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Map_Location                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::Create_Checkpoint_Marker(const struct FVector2D& Map_Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "Create Checkpoint Marker");

	Params::UBPC_MinimapSystem_C_Create_Checkpoint_Marker_Params Parms{};

	Parms.Map_Location = Map_Location;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPC_MinimapSystem.BPC_MinimapSystem_C.ExecuteUbergraph_BPC_MinimapSystem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_Hit_Location                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Success                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerMarker_C*          CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Val                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_CustomEvent_Map_Location                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_MapData_C*               CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Marker_Location_ImpactPoint                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Marker_Location_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapUI_C*                    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPC_MinimapSystem_C::ExecuteUbergraph_BPC_MinimapSystem(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_CustomEvent_Hit_Location, bool K2Node_CustomEvent_Success, bool CallFunc_IsLocalController_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerMarker_C* CallFunc_FinishSpawningActor_ReturnValue, double K2Node_CustomEvent_Val, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& K2Node_CustomEvent_Map_Location, class ABP_MapData_C* CallFunc_GetActorOfClass_ReturnValue, const struct FVector& CallFunc_Marker_Location_ImpactPoint, bool CallFunc_Marker_Location_Success, bool CallFunc_IsValid_ReturnValue_2, class UMapUI_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPC_MinimapSystem_C", "ExecuteUbergraph_BPC_MinimapSystem");

	Params::UBPC_MinimapSystem_C_ExecuteUbergraph_BPC_MinimapSystem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Hit_Location = K2Node_CustomEvent_Hit_Location;
	Parms.K2Node_CustomEvent_Success = K2Node_CustomEvent_Success;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_CustomEvent_Val = K2Node_CustomEvent_Val;
	Parms.CallFunc_NotEqual_DoubleDouble_ReturnValue = CallFunc_NotEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Map_Location = K2Node_CustomEvent_Map_Location;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_Marker_Location_ImpactPoint = CallFunc_Marker_Location_ImpactPoint;
	Parms.CallFunc_Marker_Location_Success = CallFunc_Marker_Location_Success;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


