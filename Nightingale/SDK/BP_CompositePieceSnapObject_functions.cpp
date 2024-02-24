#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C
// (None)

class UClass* UBP_CompositePieceSnapObject_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CompositePieceSnapObject_C");

	return Clss;
}


// BP_CompositePieceSnapObject_C BP_CompositePieceSnapObject.Default__BP_CompositePieceSnapObject_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CompositePieceSnapObject_C* UBP_CompositePieceSnapObject_C::GetDefaultObj()
{
	static class UBP_CompositePieceSnapObject_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CompositePieceSnapObject_C*>(UBP_CompositePieceSnapObject_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetSnapPlacementTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ACharacter*                  ControllingCharacter                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleSnapTargetData                                                   (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     HitObject                                                        (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          FoundHits                                                        (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FGridPoint                  SelectedSnapPoint                                                (Edit, BlueprintVisible)
// TArray<struct FGridPoint>          AllSnapPoints                                                    (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_GetHitObject_OutObject                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlacementRaytraceHits_OutFoundHits                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_GetPlacementRaytraceHits_OutHitResults                  (ReferenceParm, ContainsInstancedReference)
// TArray<struct FGridPoint>          CallFunc_GetSnapPoints_SnapPoints                                (ReferenceParm)
// struct FGridPoint                  CallFunc_Array_Get_Item_1                                        (None)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetGridPointOwner_OutOwner                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_ChooseCandidateSnapPoint_SnapPoint                      (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetTargetDataForTargetSnapPoint_TargetData              (None)
// bool                               CallFunc_GetTargetDataForTargetSnapPoint_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGridPointValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_CompositePieceSnapObject_C::GetSnapPlacementTransform(class ACharacter* ControllingCharacter, struct FGameplayAbilityTargetDataHandle* SnapTargetData, class UObject* HitObject, const TArray<struct FHitResult>& FoundHits, const struct FGridPoint& SelectedSnapPoint, const TArray<struct FGridPoint>& AllSnapPoints, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, enum class ESnapType CallFunc_GetSnapType_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, class UObject* CallFunc_GetHitObject_OutObject, enum class ESnapType CallFunc_GetSnapType_ReturnValue_1, class UObject* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPlacementRaytraceHits_OutFoundHits, TArray<struct FHitResult>& CallFunc_GetPlacementRaytraceHits_OutHitResults, TArray<struct FGridPoint>& CallFunc_GetSnapPoints_SnapPoints, const struct FGridPoint& CallFunc_Array_Get_Item_1, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_1, class UObject* CallFunc_GetGridPointOwner_OutOwner, const struct FGridPoint& CallFunc_ChooseCandidateSnapPoint_SnapPoint, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetTargetDataForTargetSnapPoint_TargetData, bool CallFunc_GetTargetDataForTargetSnapPoint_ReturnValue, bool CallFunc_IsGridPointValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetSnapPlacementTransform");

	Params::UBP_CompositePieceSnapObject_C_GetSnapPlacementTransform_Params Parms{};

	Parms.ControllingCharacter = ControllingCharacter;
	Parms.HitObject = HitObject;
	Parms.FoundHits = FoundHits;
	Parms.SelectedSnapPoint = SelectedSnapPoint;
	Parms.AllSnapPoints = AllSnapPoints;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetSnapType_ReturnValue = CallFunc_GetSnapType_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetHitObject_OutObject = CallFunc_GetHitObject_OutObject;
	Parms.CallFunc_GetSnapType_ReturnValue_1 = CallFunc_GetSnapType_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlacementRaytraceHits_OutFoundHits = CallFunc_GetPlacementRaytraceHits_OutFoundHits;
	Parms.CallFunc_GetPlacementRaytraceHits_OutHitResults = CallFunc_GetPlacementRaytraceHits_OutHitResults;
	Parms.CallFunc_GetSnapPoints_SnapPoints = CallFunc_GetSnapPoints_SnapPoints;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetGridPointOwner_OutOwner = CallFunc_GetGridPointOwner_OutOwner;
	Parms.CallFunc_ChooseCandidateSnapPoint_SnapPoint = CallFunc_ChooseCandidateSnapPoint_SnapPoint;
	Parms.CallFunc_GetTargetDataForTargetSnapPoint_TargetData = CallFunc_GetTargetDataForTargetSnapPoint_TargetData;
	Parms.CallFunc_GetTargetDataForTargetSnapPoint_ReturnValue = CallFunc_GetTargetDataForTargetSnapPoint_ReturnValue;
	Parms.CallFunc_IsGridPointValid_ReturnValue = CallFunc_IsGridPointValid_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapTargetData != nullptr)
		*SnapTargetData = std::move(Parms.SnapTargetData);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetRelativeTransformBetweenSnapPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityTargetDataHandleSnapData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  RelativeTransform                                                (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  TargetSnapPoint                                                  (Edit, BlueprintVisible)
// struct FGridPoint                  SourceSnapPoint                                                  (Edit, BlueprintVisible)
// struct FSnapPlacementTargetData    CallFunc_GetSnapPlacementData_OutData                            (None)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// struct FSnapPlacementTargetData    CallFunc_GetSnapPlacementData_OutData_1                          (None)
// struct FGridPoint                  CallFunc_GetGridPoint_ReturnValue                                (None)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeRelativeTransform_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UBP_CompositePieceSnapObject_C::GetRelativeTransformBetweenSnapPoints(struct FGameplayAbilityTargetDataHandle& SnapData, const struct FTransform& RelativeTransform, const struct FGridPoint& TargetSnapPoint, const struct FGridPoint& SourceSnapPoint, const struct FSnapPlacementTargetData& CallFunc_GetSnapPlacementData_OutData, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, const struct FSnapPlacementTargetData& CallFunc_GetSnapPlacementData_OutData_1, const struct FGridPoint& CallFunc_GetGridPoint_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue_1, const struct FTransform& CallFunc_MakeRelativeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetRelativeTransformBetweenSnapPoints");

	Params::UBP_CompositePieceSnapObject_C_GetRelativeTransformBetweenSnapPoints_Params Parms{};

	Parms.SnapData = SnapData;
	Parms.RelativeTransform = RelativeTransform;
	Parms.TargetSnapPoint = TargetSnapPoint;
	Parms.SourceSnapPoint = SourceSnapPoint;
	Parms.CallFunc_GetSnapPlacementData_OutData = CallFunc_GetSnapPlacementData_OutData;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.CallFunc_GetSnapPlacementData_OutData_1 = CallFunc_GetSnapPlacementData_OutData_1;
	Parms.CallFunc_GetGridPoint_ReturnValue = CallFunc_GetGridPoint_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue_1 = CallFunc_GetGridPointWorldTransform_ReturnValue_1;
	Parms.CallFunc_MakeRelativeTransform_ReturnValue = CallFunc_MakeRelativeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetAllSnapPointIndexesAllowingType
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// enum class ESnapType               SnapType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      AllAcceptableSnapIndexes                                         (Parm, OutParm)
// TArray<int32>                      AllAcceptableSnapIndexes                                         (Edit, BlueprintVisible)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  SelectedGridpoint                                                (Edit, BlueprintVisible)
// TArray<struct FGridPoint>          AllSnapPoints                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)

void UBP_CompositePieceSnapObject_C::GetAllSnapPointIndexesAllowingType(enum class ESnapType SnapType, TArray<int32>* AllAcceptableSnapIndexes, const TArray<int32>& AllAcceptableSnapIndexes, int32 SelectedIndex, const struct FGridPoint& SelectedGridpoint, const TArray<struct FGridPoint>& AllSnapPoints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetAllSnapPointIndexesAllowingType");

	Params::UBP_CompositePieceSnapObject_C_GetAllSnapPointIndexesAllowingType_Params Parms{};

	Parms.SnapType = SnapType;
	Parms.AllAcceptableSnapIndexes = AllAcceptableSnapIndexes;
	Parms.SelectedIndex = SelectedIndex;
	Parms.SelectedGridpoint = SelectedGridpoint;
	Parms.AllSnapPoints = AllSnapPoints;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AllAcceptableSnapIndexes != nullptr)
		*AllAcceptableSnapIndexes = std::move(Parms.AllAcceptableSnapIndexes);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.ChooseCandidateSnapPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// TArray<struct FGridPoint>          SnapPoints                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               SnapPointType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  SnapPoint                                                        (Parm, OutParm)
// struct FGridPoint                  L_SnapPoint                                                      (Edit, BlueprintVisible)
// TArray<struct FGridPoint>          L_SnapPoints                                                     (Edit, BlueprintVisible)
// enum class ESnapType               L_SnapPointType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentSnapPointScore                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinSnapPointScore                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CandidateSnapPoint                                               (Edit, BlueprintVisible)
// struct FVector                     ViewDir                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EndPoint                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     StartPoint                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlacementLinecastMax_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutStartPoint                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardLinecast_OutEndPoint                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGridPointOccupied_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CalculateSnapPointScore_SnapPointScore                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesLineHitSnapPoint_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  K2Node_MakeStruct_GridPoint                                      (None)
// bool                               CallFunc_IsGridPointOccupied_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::ChooseCandidateSnapPoint(TArray<struct FGridPoint>& SnapPoints, class ACharacter* Character, enum class ESnapType SnapPointType, struct FGridPoint* SnapPoint, const struct FGridPoint& L_SnapPoint, const TArray<struct FGridPoint>& L_SnapPoints, enum class ESnapType L_SnapPointType, double CurrentSnapPointScore, double MinSnapPointScore, const struct FGridPoint& CandidateSnapPoint, const struct FVector& ViewDir, const struct FVector& EndPoint, const struct FVector& StartPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_GetPlacementLinecastMax_ReturnValue, const struct FVector& CallFunc_GetForwardLinecast_OutStartPoint, const struct FVector& CallFunc_GetForwardLinecast_OutEndPoint, bool CallFunc_IsGridPointOccupied_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_CalculateSnapPointScore_SnapPointScore, bool CallFunc_DoesLineHitSnapPoint_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FGridPoint& K2Node_MakeStruct_GridPoint, bool CallFunc_IsGridPointOccupied_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "ChooseCandidateSnapPoint");

	Params::UBP_CompositePieceSnapObject_C_ChooseCandidateSnapPoint_Params Parms{};

	Parms.SnapPoints = SnapPoints;
	Parms.Character = Character;
	Parms.SnapPointType = SnapPointType;
	Parms.L_SnapPoint = L_SnapPoint;
	Parms.L_SnapPoints = L_SnapPoints;
	Parms.L_SnapPointType = L_SnapPointType;
	Parms.CurrentSnapPointScore = CurrentSnapPointScore;
	Parms.MinSnapPointScore = MinSnapPointScore;
	Parms.CandidateSnapPoint = CandidateSnapPoint;
	Parms.ViewDir = ViewDir;
	Parms.EndPoint = EndPoint;
	Parms.StartPoint = StartPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlacementLinecastMax_ReturnValue = CallFunc_GetPlacementLinecastMax_ReturnValue;
	Parms.CallFunc_GetForwardLinecast_OutStartPoint = CallFunc_GetForwardLinecast_OutStartPoint;
	Parms.CallFunc_GetForwardLinecast_OutEndPoint = CallFunc_GetForwardLinecast_OutEndPoint;
	Parms.CallFunc_IsGridPointOccupied_ReturnValue = CallFunc_IsGridPointOccupied_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_CalculateSnapPointScore_SnapPointScore = CallFunc_CalculateSnapPointScore_SnapPointScore;
	Parms.CallFunc_DoesLineHitSnapPoint_ReturnValue = CallFunc_DoesLineHitSnapPoint_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.K2Node_MakeStruct_GridPoint = K2Node_MakeStruct_GridPoint;
	Parms.CallFunc_IsGridPointOccupied_ReturnValue_1 = CallFunc_IsGridPointOccupied_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPoint != nullptr)
		*SnapPoint = std::move(Parms.SnapPoint);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetTargetDataForTargetSnapPoint
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  OtherSnapPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoosenSnapIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      AllAcceptableIndexes                                             (Edit, BlueprintVisible)
// TArray<int32>                      CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes    (ReferenceParm)
// int32                              CallFunc_GetSnapPointIndexAndOwner_OutSnapPointIndex             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSnapPointIndexAndOwner_OutSnapPointOwner             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetPieceInfoFromStructureObject_OutOwner                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPieceInfoFromStructureObject_OutPieceId              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromTransform_ReturnValue              (None)
// class USnapRulesEnforcer*          CallFunc_GetSnapRulesEnforcer_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_ChooseSnapPoint_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetGridPoint_ReturnValue                                (None)
// struct FTransform                  CallFunc_CalculateSnapTransformForGridPoints_ReturnValue         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    K2Node_MakeStruct_SnapPlacementTargetData                        (None)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_TargetDataFromSnapablePlacementData_ReturnValue         (None)

bool UBP_CompositePieceSnapObject_C::GetTargetDataForTargetSnapPoint(class UObject* OtherActor, struct FGridPoint& OtherSnapPoint, struct FGameplayAbilityTargetDataHandle* TargetData, int32 ChoosenSnapIndex, const TArray<int32>& AllAcceptableIndexes, TArray<int32>& CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes, int32 CallFunc_GetSnapPointIndexAndOwner_OutSnapPointIndex, class UObject* CallFunc_GetSnapPointIndexAndOwner_OutSnapPointOwner, class UObject* CallFunc_GetPieceInfoFromStructureObject_OutOwner, int32 CallFunc_GetPieceInfoFromStructureObject_OutPieceId, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromTransform_ReturnValue, class USnapRulesEnforcer* CallFunc_GetSnapRulesEnforcer_ReturnValue, int32 CallFunc_ChooseSnapPoint_ReturnValue, const struct FGridPoint& CallFunc_GetGridPoint_ReturnValue, const struct FTransform& CallFunc_CalculateSnapTransformForGridPoints_ReturnValue, const struct FSnapPlacementTargetData& K2Node_MakeStruct_SnapPlacementTargetData, bool CallFunc_Array_Contains_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_TargetDataFromSnapablePlacementData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetTargetDataForTargetSnapPoint");

	Params::UBP_CompositePieceSnapObject_C_GetTargetDataForTargetSnapPoint_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherSnapPoint = OtherSnapPoint;
	Parms.ChoosenSnapIndex = ChoosenSnapIndex;
	Parms.AllAcceptableIndexes = AllAcceptableIndexes;
	Parms.CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes = CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes;
	Parms.CallFunc_GetSnapPointIndexAndOwner_OutSnapPointIndex = CallFunc_GetSnapPointIndexAndOwner_OutSnapPointIndex;
	Parms.CallFunc_GetSnapPointIndexAndOwner_OutSnapPointOwner = CallFunc_GetSnapPointIndexAndOwner_OutSnapPointOwner;
	Parms.CallFunc_GetPieceInfoFromStructureObject_OutOwner = CallFunc_GetPieceInfoFromStructureObject_OutOwner;
	Parms.CallFunc_GetPieceInfoFromStructureObject_OutPieceId = CallFunc_GetPieceInfoFromStructureObject_OutPieceId;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AbilityTargetDataFromTransform_ReturnValue = CallFunc_AbilityTargetDataFromTransform_ReturnValue;
	Parms.CallFunc_GetSnapRulesEnforcer_ReturnValue = CallFunc_GetSnapRulesEnforcer_ReturnValue;
	Parms.CallFunc_ChooseSnapPoint_ReturnValue = CallFunc_ChooseSnapPoint_ReturnValue;
	Parms.CallFunc_GetGridPoint_ReturnValue = CallFunc_GetGridPoint_ReturnValue;
	Parms.CallFunc_CalculateSnapTransformForGridPoints_ReturnValue = CallFunc_CalculateSnapTransformForGridPoints_ReturnValue;
	Parms.K2Node_MakeStruct_SnapPlacementTargetData = K2Node_MakeStruct_SnapPlacementTargetData;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_TargetDataFromSnapablePlacementData_ReturnValue = CallFunc_TargetDataFromSnapablePlacementData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetData != nullptr)
		*TargetData = std::move(Parms.TargetData);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.ValidateSnapPlacementData
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSnapPlacementTargetData    SnapData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  TargetSnapPoint                                                  (Edit, BlueprintVisible)
// int32                              SourcePointIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// struct FGridPoint                  CallFunc_GetGridPoint_ReturnValue                                (None)
// bool                               CallFunc_IsGridPointValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAttachSnapPoints_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGridPointIndexValid_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_CompositePieceSnapObject_C::ValidateSnapPlacementData(struct FSnapPlacementTargetData& SnapData, const struct FGridPoint& TargetSnapPoint, int32 SourcePointIndex, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, const struct FGridPoint& CallFunc_GetGridPoint_ReturnValue, bool CallFunc_IsGridPointValid_ReturnValue, bool CallFunc_CanAttachSnapPoints_ReturnValue, bool CallFunc_IsGridPointIndexValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "ValidateSnapPlacementData");

	Params::UBP_CompositePieceSnapObject_C_ValidateSnapPlacementData_Params Parms{};

	Parms.SnapData = SnapData;
	Parms.TargetSnapPoint = TargetSnapPoint;
	Parms.SourcePointIndex = SourcePointIndex;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.CallFunc_GetGridPoint_ReturnValue = CallFunc_GetGridPoint_ReturnValue;
	Parms.CallFunc_IsGridPointValid_ReturnValue = CallFunc_IsGridPointValid_ReturnValue;
	Parms.CallFunc_CanAttachSnapPoints_ReturnValue = CallFunc_CanAttachSnapPoints_ReturnValue;
	Parms.CallFunc_IsGridPointIndexValid_ReturnValue = CallFunc_IsGridPointIndexValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetAllSnapPointsOfType
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESnapType               SnapType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          MatchingSnapPoints                                               (Parm, OutParm)
// TArray<struct FGridPoint>          AllSnapPoints                                                    (Edit, BlueprintVisible)
// TArray<struct FGridPoint>          MatchingPoints                                                   (Edit, BlueprintVisible)
// struct FGridPoint                  SnapPoint                                                        (Edit, BlueprintVisible)
// enum class ESnapType               L_SnapType                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::GetAllSnapPointsOfType(enum class ESnapType SnapType, TArray<struct FGridPoint>* MatchingSnapPoints, const TArray<struct FGridPoint>& AllSnapPoints, const TArray<struct FGridPoint>& MatchingPoints, const struct FGridPoint& SnapPoint, enum class ESnapType L_SnapType, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetAllSnapPointsOfType");

	Params::UBP_CompositePieceSnapObject_C_GetAllSnapPointsOfType_Params Parms{};

	Parms.SnapType = SnapType;
	Parms.AllSnapPoints = AllSnapPoints;
	Parms.MatchingPoints = MatchingPoints;
	Parms.SnapPoint = SnapPoint;
	Parms.L_SnapType = L_SnapType;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MatchingSnapPoints != nullptr)
		*MatchingSnapPoints = std::move(Parms.MatchingSnapPoints);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetAllUnoccupiedSnapPointsOfType
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESnapType               SnapType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          MatchingSnapPoints                                               (Parm, OutParm)
// TArray<struct FGridPoint>          MatchingPoints                                                   (Edit, BlueprintVisible)
// struct FGridPoint                  SnapPoint                                                        (Edit, BlueprintVisible)
// TArray<struct FGridPoint>          AllSnapPoints                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGridPointOccupied_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::GetAllUnoccupiedSnapPointsOfType(enum class ESnapType SnapType, TArray<struct FGridPoint>* MatchingSnapPoints, const TArray<struct FGridPoint>& MatchingPoints, const struct FGridPoint& SnapPoint, const TArray<struct FGridPoint>& AllSnapPoints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsGridPointOccupied_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetAllUnoccupiedSnapPointsOfType");

	Params::UBP_CompositePieceSnapObject_C_GetAllUnoccupiedSnapPointsOfType_Params Parms{};

	Parms.SnapType = SnapType;
	Parms.MatchingPoints = MatchingPoints;
	Parms.SnapPoint = SnapPoint;
	Parms.AllSnapPoints = AllSnapPoints;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsGridPointOccupied_ReturnValue = CallFunc_IsGridPointOccupied_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MatchingSnapPoints != nullptr)
		*MatchingSnapPoints = std::move(Parms.MatchingSnapPoints);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.AttachToOtherSnapObject
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCompositePieceSnapObject*   OtherSnapObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  OtherSnapPoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              MyGridPointIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          SnapPoints                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_IsGridPointIndexValid_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::AttachToOtherSnapObject(class UCompositePieceSnapObject* OtherSnapObject, struct FGridPoint& OtherSnapPoint, int32 MyGridPointIndex, const TArray<struct FGridPoint>& SnapPoints, bool CallFunc_IsGridPointIndexValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "AttachToOtherSnapObject");

	Params::UBP_CompositePieceSnapObject_C_AttachToOtherSnapObject_Params Parms{};

	Parms.OtherSnapObject = OtherSnapObject;
	Parms.OtherSnapPoint = OtherSnapPoint;
	Parms.MyGridPointIndex = MyGridPointIndex;
	Parms.SnapPoints = SnapPoints;
	Parms.CallFunc_IsGridPointIndexValid_ReturnValue = CallFunc_IsGridPointIndexValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetMatchingGridPointForPiece
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     OtherPiece                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  OtherPieceGridPoint                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGridPoint                  ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              GridPointIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoosenIndex                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      AllAcceptableSnapIndexes                                         (Edit, BlueprintVisible)
// TArray<int32>                      CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes    (ReferenceParm)
// struct FGridPoint                  CallFunc_GetGridPoint_ReturnValue                                (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USnapRulesEnforcer*          CallFunc_GetSnapRulesEnforcer_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  K2Node_MakeStruct_GridPoint                                      (None)
// int32                              CallFunc_ChooseSnapPoint_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGridPoint UBP_CompositePieceSnapObject_C::GetMatchingGridPointForPiece(class UObject* OtherPiece, struct FGridPoint& OtherPieceGridPoint, int32 GridPointIndex, int32 ChoosenIndex, const TArray<int32>& AllAcceptableSnapIndexes, TArray<int32>& CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes, const struct FGridPoint& CallFunc_GetGridPoint_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class USnapRulesEnforcer* CallFunc_GetSnapRulesEnforcer_ReturnValue, const struct FGridPoint& K2Node_MakeStruct_GridPoint, int32 CallFunc_ChooseSnapPoint_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetMatchingGridPointForPiece");

	Params::UBP_CompositePieceSnapObject_C_GetMatchingGridPointForPiece_Params Parms{};

	Parms.OtherPiece = OtherPiece;
	Parms.OtherPieceGridPoint = OtherPieceGridPoint;
	Parms.GridPointIndex = GridPointIndex;
	Parms.ChoosenIndex = ChoosenIndex;
	Parms.AllAcceptableSnapIndexes = AllAcceptableSnapIndexes;
	Parms.CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes = CallFunc_GetAllMatchingSnapPointIndexes_FoundSnapPointIndexes;
	Parms.CallFunc_GetGridPoint_ReturnValue = CallFunc_GetGridPoint_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetSnapRulesEnforcer_ReturnValue = CallFunc_GetSnapRulesEnforcer_ReturnValue;
	Parms.K2Node_MakeStruct_GridPoint = K2Node_MakeStruct_GridPoint;
	Parms.CallFunc_ChooseSnapPoint_ReturnValue = CallFunc_ChooseSnapPoint_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetOwningStructureType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESnapType               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESnapType UBP_CompositePieceSnapObject_C::GetOwningStructureType(enum class ESnapType CallFunc_GetSnapType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetOwningStructureType");

	Params::UBP_CompositePieceSnapObject_C_GetOwningStructureType_Params Parms{};

	Parms.CallFunc_GetSnapType_ReturnValue = CallFunc_GetSnapType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.CalculateSnapTransformForGridPoints
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGridPoint                  ReferencePoint                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGridPoint                  PointToSnap                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USnapRulesEnforcer*          CallFunc_GetSnapRulesEnforcer_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_CalculateSnapTransformForPoints_ReturnValue             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform UBP_CompositePieceSnapObject_C::CalculateSnapTransformForGridPoints(struct FGridPoint& ReferencePoint, struct FGridPoint& PointToSnap, class USnapRulesEnforcer* CallFunc_GetSnapRulesEnforcer_ReturnValue, const struct FTransform& CallFunc_CalculateSnapTransformForPoints_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "CalculateSnapTransformForGridPoints");

	Params::UBP_CompositePieceSnapObject_C_CalculateSnapTransformForGridPoints_Params Parms{};

	Parms.ReferencePoint = ReferencePoint;
	Parms.PointToSnap = PointToSnap;
	Parms.CallFunc_GetSnapRulesEnforcer_ReturnValue = CallFunc_GetSnapRulesEnforcer_ReturnValue;
	Parms.CallFunc_CalculateSnapTransformForPoints_ReturnValue = CallFunc_CalculateSnapTransformForPoints_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.DrawSnapPoints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FGridPoint>          SnapPoints                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGridPoint                  SelectedSnapPoint                                                (Edit, BlueprintVisible)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_OwnerHasAuthority_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSnapPointAcceptableStructuresString_ReturnValue      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugCircle_Radius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::DrawSnapPoints(TArray<struct FGridPoint>& SnapPoints, const struct FGridPoint& SelectedSnapPoint, const struct FLinearColor& Temp_struct_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, const struct FGridPoint& CallFunc_Array_Get_Item, bool CallFunc_OwnerHasAuthority_ReturnValue, const class FString& CallFunc_GetSnapPointAcceptableStructuresString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FLinearColor& K2Node_Select_Default, double CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_DrawDebugCircle_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "DrawSnapPoints");

	Params::UBP_CompositePieceSnapObject_C_DrawSnapPoints_Params Parms{};

	Parms.SnapPoints = SnapPoints;
	Parms.SelectedSnapPoint = SelectedSnapPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_OwnerHasAuthority_ReturnValue = CallFunc_OwnerHasAuthority_ReturnValue;
	Parms.CallFunc_GetSnapPointAcceptableStructuresString_ReturnValue = CallFunc_GetSnapPointAcceptableStructuresString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue_1 = CallFunc_GetGridPointWorldTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_DrawDebugCircle_Radius_ImplicitCast = CallFunc_DrawDebugCircle_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.Log Failed to Match Snap Point Error
// (Private, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::Log_Failed_to_Match_Snap_Point_Error(class UObject* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "Log Failed to Match Snap Point Error");

	Params::UBP_CompositePieceSnapObject_C_Log_Failed_to_Match_Snap_Point_Error_Params Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetAllMatchingSnapPointIndexes
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  OtherPieceGridPoint                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<int32>                      FoundSnapPointIndexes                                            (Parm, OutParm)
// TArray<struct FGridPoint>          AllSnapPoints                                                    (Edit, BlueprintVisible)
// TArray<int32>                      AllAcceptableSnapIndexes                                         (Edit, BlueprintVisible)
// int32                              SelectedIndex                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  SelectedGridpoint                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USnapRulesEnforcer*          CallFunc_GetSnapRulesEnforcer_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_FilterSourcePointIndexes_ReturnValue                    (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_SnapPointType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::GetAllMatchingSnapPointIndexes(class UObject* OtherActor, const struct FGridPoint& OtherPieceGridPoint, TArray<int32>* FoundSnapPointIndexes, const TArray<struct FGridPoint>& AllSnapPoints, const TArray<int32>& AllAcceptableSnapIndexes, int32 SelectedIndex, const struct FGridPoint& SelectedGridpoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESnapType CallFunc_GetSnapType_ReturnValue, class USnapRulesEnforcer* CallFunc_GetSnapRulesEnforcer_ReturnValue, TArray<int32>& CallFunc_FilterSourcePointIndexes_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, enum class ESnapType CallFunc_GetSnapType_SnapPointType, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetAllMatchingSnapPointIndexes");

	Params::UBP_CompositePieceSnapObject_C_GetAllMatchingSnapPointIndexes_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.OtherPieceGridPoint = OtherPieceGridPoint;
	Parms.AllSnapPoints = AllSnapPoints;
	Parms.AllAcceptableSnapIndexes = AllAcceptableSnapIndexes;
	Parms.SelectedIndex = SelectedIndex;
	Parms.SelectedGridpoint = SelectedGridpoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSnapType_ReturnValue = CallFunc_GetSnapType_ReturnValue;
	Parms.CallFunc_GetSnapRulesEnforcer_ReturnValue = CallFunc_GetSnapRulesEnforcer_ReturnValue;
	Parms.CallFunc_FilterSourcePointIndexes_ReturnValue = CallFunc_FilterSourcePointIndexes_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapType_SnapPointType = CallFunc_GetSnapType_SnapPointType;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue_1 = CallFunc_DoesGridPointAllowStructureType_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundSnapPointIndexes != nullptr)
		*FoundSnapPointIndexes = std::move(Parms.FoundSnapPointIndexes);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.CalculateSnapPointScore
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     EyePosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ViewDir                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SnapPointScore                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     EyeToSnap                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Distance                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Acos_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::CalculateSnapPointScore(struct FGridPoint& SnapPoint, const struct FVector& EyePosition, const struct FVector& ViewDir, double* SnapPointScore, const struct FVector& EyeToSnap, double Distance, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_Acos_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "CalculateSnapPointScore");

	Params::UBP_CompositePieceSnapObject_C_CalculateSnapPointScore_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.EyePosition = EyePosition;
	Parms.ViewDir = ViewDir;
	Parms.EyeToSnap = EyeToSnap;
	Parms.Distance = Distance;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Acos_ReturnValue = CallFunc_Acos_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SnapPointScore != nullptr)
		*SnapPointScore = Parms.SnapPointScore;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.CanSnapToNearbyActor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGridPoint                  SnapPoint                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UObject*>             NearbyActors                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               HasAnyValidAttachment                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  L_SnapPoint                                                      (Edit, BlueprintVisible)
// struct FGridPoint                  PotentialSnapPoint                                               (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGridPointValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_FindClosestSnapPoint_NearestSnapPoint                   (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAttachSnapPoints_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::CanSnapToNearbyActor(const struct FGridPoint& SnapPoint, TArray<class UObject*>& NearbyActors, bool* HasAnyValidAttachment, const struct FGridPoint& L_SnapPoint, const struct FGridPoint& PotentialSnapPoint, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, bool CallFunc_IsGridPointValid_ReturnValue, const struct FGridPoint& CallFunc_FindClosestSnapPoint_NearestSnapPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_CanAttachSnapPoints_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "CanSnapToNearbyActor");

	Params::UBP_CompositePieceSnapObject_C_CanSnapToNearbyActor_Params Parms{};

	Parms.SnapPoint = SnapPoint;
	Parms.NearbyActors = NearbyActors;
	Parms.L_SnapPoint = L_SnapPoint;
	Parms.PotentialSnapPoint = PotentialSnapPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsGridPointValid_ReturnValue = CallFunc_IsGridPointValid_ReturnValue;
	Parms.CallFunc_FindClosestSnapPoint_NearestSnapPoint = CallFunc_FindClosestSnapPoint_NearestSnapPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_CanAttachSnapPoints_ReturnValue = CallFunc_CanAttachSnapPoints_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAnyValidAttachment != nullptr)
		*HasAnyValidAttachment = Parms.HasAnyValidAttachment;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetOwnerType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class ESnapType               OwnerType                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_SnapPointType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::GetOwnerType(enum class ESnapType* OwnerType, class UObject* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, enum class ESnapType CallFunc_GetSnapType_SnapPointType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetOwnerType");

	Params::UBP_CompositePieceSnapObject_C_GetOwnerType_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapType_SnapPointType = CallFunc_GetSnapType_SnapPointType;

	UObject::ProcessEvent(Func, &Parms);

	if (OwnerType != nullptr)
		*OwnerType = Parms.OwnerType;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.GetLineAngleToPointRadians
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Point                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineOrigin                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LineDirection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AngleXY                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             AngleXZ                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OriginToPoint                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Acos_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Dot_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Acos_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::GetLineAngleToPointRadians(const struct FVector& Point, const struct FVector& LineOrigin, const struct FVector& LineDirection, double* AngleXY, double* AngleXZ, const struct FVector& OriginToPoint, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Normal_ReturnValue_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_3, double CallFunc_Acos_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_3, double CallFunc_Abs_ReturnValue, double CallFunc_Dot_VectorVector_ReturnValue_1, double CallFunc_Acos_ReturnValue_1, double CallFunc_Abs_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "GetLineAngleToPointRadians");

	Params::UBP_CompositePieceSnapObject_C_GetLineAngleToPointRadians_Params Parms{};

	Parms.Point = Point;
	Parms.LineOrigin = LineOrigin;
	Parms.LineDirection = LineDirection;
	Parms.OriginToPoint = OriginToPoint;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Normal_ReturnValue_2 = CallFunc_Normal_ReturnValue_2;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_3 = CallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Acos_ReturnValue = CallFunc_Acos_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_3 = CallFunc_Normal_ReturnValue_3;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_Dot_VectorVector_ReturnValue_1 = CallFunc_Dot_VectorVector_ReturnValue_1;
	Parms.CallFunc_Acos_ReturnValue_1 = CallFunc_Acos_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue_1 = CallFunc_Abs_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AngleXY != nullptr)
		*AngleXY = Parms.AngleXY;

	if (AngleXZ != nullptr)
		*AngleXZ = Parms.AngleXZ;

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.FindClosestSnapPoint
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  MySnapPoint                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FGridPoint                  NearestSnapPoint                                                 (Parm, OutParm)
// struct FGridPoint                  L_MySnapPoint                                                    (Edit, BlueprintVisible)
// double                             MinSqrDist                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CandidateSnapPoint                                               (Edit, BlueprintVisible)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetSnapPoints_SnapPoints                                (ReferenceParm)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetGridPointOwner_OutOwner                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_SnapPointType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesGridPointAllowStructureType_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue_1                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::FindClosestSnapPoint(class UObject* OtherActor, const struct FGridPoint& MySnapPoint, struct FGridPoint* NearestSnapPoint, const struct FGridPoint& L_MySnapPoint, double MinSqrDist, const struct FGridPoint& CandidateSnapPoint, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, TArray<struct FGridPoint>& CallFunc_GetSnapPoints_SnapPoints, const struct FGridPoint& CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_GetGridPointOwner_OutOwner, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESnapType CallFunc_GetSnapType_SnapPointType, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_DoesGridPointAllowStructureType_ReturnValue, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "FindClosestSnapPoint");

	Params::UBP_CompositePieceSnapObject_C_FindClosestSnapPoint_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.MySnapPoint = MySnapPoint;
	Parms.L_MySnapPoint = L_MySnapPoint;
	Parms.MinSqrDist = MinSqrDist;
	Parms.CandidateSnapPoint = CandidateSnapPoint;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSnapPoints_SnapPoints = CallFunc_GetSnapPoints_SnapPoints;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetGridPointOwner_OutOwner = CallFunc_GetGridPointOwner_OutOwner;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface_1 = K2Node_DynamicCast_AsStructure_Snappable_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSnapType_SnapPointType = CallFunc_GetSnapType_SnapPointType;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DoesGridPointAllowStructureType_ReturnValue = CallFunc_DoesGridPointAllowStructureType_ReturnValue;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue_1 = CallFunc_GetGridPointWorldTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NearestSnapPoint != nullptr)
		*NearestSnapPoint = std::move(Parms.NearestSnapPoint);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.DEBUG_DrawGridPoints
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::DEBUG_DrawGridPoints(double DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "DEBUG_DrawGridPoints");

	Params::UBP_CompositePieceSnapObject_C_DEBUG_DrawGridPoints_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.ResolvePotentiallyOccupiedGridPoints
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_CompositePieceSnapObject_C::ResolvePotentiallyOccupiedGridPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "ResolvePotentiallyOccupiedGridPoints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CompositePieceSnapObject.BP_CompositePieceSnapObject_C.ExecuteUbergraph_BP_CompositePieceSnapObject
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGridPoint>          CallFunc_GetGridPoints_ReturnValue                               (ReferenceParm)
// struct FGridPoint                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetGridPointOccupyingStructures_OutOccupyingStructures  (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGridPointOccupied_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Radius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_CompositePieceSnapObject_C::ExecuteUbergraph_BP_CompositePieceSnapObject(int32 EntryPoint, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue, const struct FGridPoint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UObject*>& CallFunc_GetGridPointOccupyingStructures_OutOccupyingStructures, bool CallFunc_Less_IntInt_ReturnValue, class UObject* CallFunc_Array_Get_Item_1, const class FString& CallFunc_GetDisplayName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsGridPointOccupied_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double Temp_real_Variable, double Temp_real_Variable_1, bool Temp_bool_Variable_1, double K2Node_Event_DeltaSeconds, double K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default_2, float CallFunc_DrawDebugSphere_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CompositePieceSnapObject_C", "ExecuteUbergraph_BP_CompositePieceSnapObject");

	Params::UBP_CompositePieceSnapObject_C_ExecuteUbergraph_BP_CompositePieceSnapObject_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_GetGridPoints_ReturnValue = CallFunc_GetGridPoints_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGridPointOccupyingStructures_OutOccupyingStructures = CallFunc_GetGridPointOccupyingStructures_OutOccupyingStructures;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsGridPointOccupied_ReturnValue = CallFunc_IsGridPointOccupied_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.Temp_real_Variable_1 = Temp_real_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_DrawDebugSphere_Radius_ImplicitCast = CallFunc_DrawDebugSphere_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


