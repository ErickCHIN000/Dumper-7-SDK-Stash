#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C
// (None)

class UClass* UBP_AbilityZoneVisualizationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AbilityZoneVisualizationComponent_C");

	return Clss;
}


// BP_AbilityZoneVisualizationComponent_C BP_AbilityZoneVisualizationComponent.Default__BP_AbilityZoneVisualizationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_AbilityZoneVisualizationComponent_C* UBP_AbilityZoneVisualizationComponent_C::GetDefaultObj()
{
	static class UBP_AbilityZoneVisualizationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_AbilityZoneVisualizationComponent_C*>(UBP_AbilityZoneVisualizationComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.FindRandomPointInZone
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Reference                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureAbilityZoneDefinitionZoneDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinRange                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxRange                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     PointInZone                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LSocket                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LMaxDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LMinDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LPitchRange                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LPitchOffset                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LYawRange                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LYawOffset                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ZoneDefinitionType LZoneType                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Get_Zone_Reference_Info_ZoneOrigin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Zone_Reference_Info_ReferenceForward                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LYawOffset_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LYawRange_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LPitchOffset_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LPitchRange_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LMinDistance_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LMaxDistance_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::FindRandomPointInZone(class AActor* Reference, const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, double MinRange, double MaxRange, struct FVector* PointInZone, class FName LSocket, double LMaxDistance, double LMinDistance, double LPitchRange, double LPitchOffset, double LYawRange, double LYawOffset, enum class Enum_ZoneDefinitionType LZoneType, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_RandomFloatInRange_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_2, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Get_Zone_Reference_Info_ZoneOrigin, const struct FVector& CallFunc_Get_Zone_Reference_Info_ReferenceForward, const struct FVector2D& CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, double K2Node_VariableSet_LYawOffset_ImplicitCast, double K2Node_VariableSet_LYawRange_ImplicitCast, double K2Node_VariableSet_LPitchOffset_ImplicitCast, double K2Node_VariableSet_LPitchRange_ImplicitCast, double K2Node_VariableSet_LMinDistance_ImplicitCast, double K2Node_VariableSet_LMaxDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "FindRandomPointInZone");

	Params::UBP_AbilityZoneVisualizationComponent_C_FindRandomPointInZone_Params Parms{};

	Parms.Reference = Reference;
	Parms.ZoneDefinition = ZoneDefinition;
	Parms.MinRange = MinRange;
	Parms.MaxRange = MaxRange;
	Parms.LSocket = LSocket;
	Parms.LMaxDistance = LMaxDistance;
	Parms.LMinDistance = LMinDistance;
	Parms.LPitchRange = LPitchRange;
	Parms.LPitchOffset = LPitchOffset;
	Parms.LYawRange = LYawRange;
	Parms.LYawOffset = LYawOffset;
	Parms.LZoneType = LZoneType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = CallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_Get_Zone_Reference_Info_ZoneOrigin = CallFunc_Get_Zone_Reference_Info_ZoneOrigin;
	Parms.CallFunc_Get_Zone_Reference_Info_ReferenceForward = CallFunc_Get_Zone_Reference_Info_ReferenceForward;
	Parms.CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY = CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.K2Node_VariableSet_LYawOffset_ImplicitCast = K2Node_VariableSet_LYawOffset_ImplicitCast;
	Parms.K2Node_VariableSet_LYawRange_ImplicitCast = K2Node_VariableSet_LYawRange_ImplicitCast;
	Parms.K2Node_VariableSet_LPitchOffset_ImplicitCast = K2Node_VariableSet_LPitchOffset_ImplicitCast;
	Parms.K2Node_VariableSet_LPitchRange_ImplicitCast = K2Node_VariableSet_LPitchRange_ImplicitCast;
	Parms.K2Node_VariableSet_LMinDistance_ImplicitCast = K2Node_VariableSet_LMinDistance_ImplicitCast;
	Parms.K2Node_VariableSet_LMaxDistance_ImplicitCast = K2Node_VariableSet_LMaxDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (PointInZone != nullptr)
		*PointInZone = std::move(Parms.PointInZone);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.PrintZoneVisualization
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Reference                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureAbilityZoneDefinitionZoneDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ZoneLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                ZoneColour                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZoneDuration                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZoneDebugRange                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ZoneSegments                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             ZoneOpacity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LZoneOpacity                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   LZoneDirectionXY                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LReferenceForward                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LZoneOrigin                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LSocket                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LMaxDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LMinDistance                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LPitchRange                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LPitch                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LYawRange                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LYaw                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ZoneDefinitionType LZoneType                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Zone_Reference_Info_ZoneOrigin                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Get_Zone_Reference_Info_ReferenceForward                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugCircle_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugString_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LYaw_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LYawRange_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LPitch_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LPitchRange_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LMinDistance_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_LMaxDistance_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugCircle_Radius_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugCircle_Radius_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_Length_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_Duration_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugConeInDegrees_Thickness_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugCircle_Duration_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::PrintZoneVisualization(class AActor* Reference, const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, const class FString& ZoneLabel, const struct FLinearColor& ZoneColour, double ZoneDuration, double ZoneDebugRange, int32 ZoneSegments, double ZoneOpacity, double LZoneOpacity, const struct FVector2D& LZoneDirectionXY, const struct FVector& LReferenceForward, const struct FVector& LZoneOrigin, class FName LSocket, double LMaxDistance, double LMinDistance, double LPitchRange, double LPitch, double LYawRange, double LYaw, enum class Enum_ZoneDefinitionType LZoneType, bool CallFunc_IsValid_ReturnValue, double CallFunc_FClamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Get_Zone_Reference_Info_ZoneOrigin, const struct FVector& CallFunc_Get_Zone_Reference_Info_ReferenceForward, const struct FVector2D& CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY, bool K2Node_SwitchEnum_CmpSuccess_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, float CallFunc_DrawDebugCircle_Duration_ImplicitCast, float CallFunc_DrawDebugString_Duration_ImplicitCast, double K2Node_VariableSet_LYaw_ImplicitCast, double K2Node_VariableSet_LYawRange_ImplicitCast, double K2Node_VariableSet_LPitch_ImplicitCast, double K2Node_VariableSet_LPitchRange_ImplicitCast, double K2Node_VariableSet_LMinDistance_ImplicitCast, double K2Node_VariableSet_LMaxDistance_ImplicitCast, float CallFunc_DrawDebugCircle_Radius_ImplicitCast, float CallFunc_DrawDebugCircle_Radius_ImplicitCast_1, float CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Length_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Duration_ImplicitCast, float CallFunc_DrawDebugConeInDegrees_Thickness_ImplicitCast, float CallFunc_DrawDebugCircle_Duration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "PrintZoneVisualization");

	Params::UBP_AbilityZoneVisualizationComponent_C_PrintZoneVisualization_Params Parms{};

	Parms.Reference = Reference;
	Parms.ZoneDefinition = ZoneDefinition;
	Parms.ZoneLabel = ZoneLabel;
	Parms.ZoneColour = ZoneColour;
	Parms.ZoneDuration = ZoneDuration;
	Parms.ZoneDebugRange = ZoneDebugRange;
	Parms.ZoneSegments = ZoneSegments;
	Parms.ZoneOpacity = ZoneOpacity;
	Parms.LZoneOpacity = LZoneOpacity;
	Parms.LZoneDirectionXY = LZoneDirectionXY;
	Parms.LReferenceForward = LReferenceForward;
	Parms.LZoneOrigin = LZoneOrigin;
	Parms.LSocket = LSocket;
	Parms.LMaxDistance = LMaxDistance;
	Parms.LMinDistance = LMinDistance;
	Parms.LPitchRange = LPitchRange;
	Parms.LPitch = LPitch;
	Parms.LYawRange = LYawRange;
	Parms.LYaw = LYaw;
	Parms.LZoneType = LZoneType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Get_Zone_Reference_Info_ZoneOrigin = CallFunc_Get_Zone_Reference_Info_ZoneOrigin;
	Parms.CallFunc_Get_Zone_Reference_Info_ReferenceForward = CallFunc_Get_Zone_Reference_Info_ReferenceForward;
	Parms.CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY = CallFunc_Get_Zone_Reference_Info_ZoneDirectionXY;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_DrawDebugCircle_Duration_ImplicitCast = CallFunc_DrawDebugCircle_Duration_ImplicitCast;
	Parms.CallFunc_DrawDebugString_Duration_ImplicitCast = CallFunc_DrawDebugString_Duration_ImplicitCast;
	Parms.K2Node_VariableSet_LYaw_ImplicitCast = K2Node_VariableSet_LYaw_ImplicitCast;
	Parms.K2Node_VariableSet_LYawRange_ImplicitCast = K2Node_VariableSet_LYawRange_ImplicitCast;
	Parms.K2Node_VariableSet_LPitch_ImplicitCast = K2Node_VariableSet_LPitch_ImplicitCast;
	Parms.K2Node_VariableSet_LPitchRange_ImplicitCast = K2Node_VariableSet_LPitchRange_ImplicitCast;
	Parms.K2Node_VariableSet_LMinDistance_ImplicitCast = K2Node_VariableSet_LMinDistance_ImplicitCast;
	Parms.K2Node_VariableSet_LMaxDistance_ImplicitCast = K2Node_VariableSet_LMaxDistance_ImplicitCast;
	Parms.CallFunc_DrawDebugCircle_Radius_ImplicitCast = CallFunc_DrawDebugCircle_Radius_ImplicitCast;
	Parms.CallFunc_DrawDebugCircle_Radius_ImplicitCast_1 = CallFunc_DrawDebugCircle_Radius_ImplicitCast_1;
	Parms.CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast = CallFunc_DrawDebugConeInDegrees_AngleHeight_ImplicitCast;
	Parms.CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast = CallFunc_DrawDebugConeInDegrees_AngleWidth_ImplicitCast;
	Parms.CallFunc_DrawDebugConeInDegrees_Length_ImplicitCast = CallFunc_DrawDebugConeInDegrees_Length_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_DrawDebugConeInDegrees_Duration_ImplicitCast = CallFunc_DrawDebugConeInDegrees_Duration_ImplicitCast;
	Parms.CallFunc_DrawDebugConeInDegrees_Thickness_ImplicitCast = CallFunc_DrawDebugConeInDegrees_Thickness_ImplicitCast;
	Parms.CallFunc_DrawDebugCircle_Duration_ImplicitCast_1 = CallFunc_DrawDebugCircle_Duration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.PrintAIARNames
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::PrintAIARNames(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "PrintAIARNames");

	Params::UBP_AbilityZoneVisualizationComponent_C_PrintAIARNames_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.PrintCommands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::PrintCommands(const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsServer_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "PrintCommands");

	Params::UBP_AbilityZoneVisualizationComponent_C_PrintCommands_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.GeneratePointCloud
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CreatureAbilityZoneDefinitionZoneDefinition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PointDensity                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                PointColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindRandomPointInZone_PointInZone                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugPoint_Duration_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::GeneratePointCloud(const struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, int32 PointDensity, const struct FLinearColor& PointColor, double Duration, class AActor* CallFunc_GetOwner_ReturnValue, int32 Temp_int_Variable, const struct FVector& CallFunc_FindRandomPointInZone_PointInZone, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_DrawDebugPoint_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "GeneratePointCloud");

	Params::UBP_AbilityZoneVisualizationComponent_C_GeneratePointCloud_Params Parms{};

	Parms.ZoneDefinition = ZoneDefinition;
	Parms.PointDensity = PointDensity;
	Parms.PointColor = PointColor;
	Parms.Duration = Duration;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_FindRandomPointInZone_PointInZone = CallFunc_FindRandomPointInZone_PointInZone;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_DrawDebugPoint_Duration_ImplicitCast = CallFunc_DrawDebugPoint_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.RandomizeZoneColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_HSVToRGB_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HSVToRGB_H_ImplicitCast                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::RandomizeZoneColors(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FLinearColor& CallFunc_HSVToRGB_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_HSVToRGB_H_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "RandomizeZoneColors");

	Params::UBP_AbilityZoneVisualizationComponent_C_RandomizeZoneColors_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_HSVToRGB_ReturnValue = CallFunc_HSVToRGB_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_HSVToRGB_H_ImplicitCast = CallFunc_HSVToRGB_H_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.PrintSpecificZone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AIARName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LZoneColor                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LZoneLabel                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// struct FS_CreatureAbilityZoneDefinitionLZoneDefinition                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Array_Get_Item                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::PrintSpecificZone(const class FString& AIARName, double Duration, const struct FLinearColor& LZoneColor, const class FString& LZoneLabel, const struct FS_CreatureAbilityZoneDefinition& LZoneDefinition, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "PrintSpecificZone");

	Params::UBP_AbilityZoneVisualizationComponent_C_PrintSpecificZone_Params Parms{};

	Parms.AIARName = AIARName;
	Parms.Duration = Duration;
	Parms.LZoneColor = LZoneColor;
	Parms.LZoneLabel = LZoneLabel;
	Parms.LZoneDefinition = LZoneDefinition;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.PrintAllZones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CreatureAbilityZoneDefinitionLZoneDefinition                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LZoneColor                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      LZoneLabel                                                       (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FS_CreatureAbilityZoneDefinitionCallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::PrintAllZones(const struct FS_CreatureAbilityZoneDefinition& LZoneDefinition, const struct FLinearColor& LZoneColor, const class FString& LZoneLabel, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FS_CreatureAbilityZoneDefinition& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "PrintAllZones");

	Params::UBP_AbilityZoneVisualizationComponent_C_PrintAllZones_Params Parms{};

	Parms.LZoneDefinition = LZoneDefinition;
	Parms.LZoneColor = LZoneColor;
	Parms.LZoneLabel = LZoneLabel;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.StopVisAllZones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::StopVisAllZones(const struct FGameplayTag& Temp_struct_Variable, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "StopVisAllZones");

	Params::UBP_AbilityZoneVisualizationComponent_C_StopVisAllZones_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.StartVisAllZones
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::StartVisAllZones(const struct FGameplayTag& Temp_struct_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "StartVisAllZones");

	Params::UBP_AbilityZoneVisualizationComponent_C_StartVisAllZones_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.AddDefinition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CreatureAbilityZoneDefinitionZoneDefintion                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ZoneLabel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                ZoneColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::AddDefinition(struct FS_CreatureAbilityZoneDefinition& ZoneDefintion, const class FString& ZoneLabel, const struct FLinearColor& ZoneColor, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "AddDefinition");

	Params::UBP_AbilityZoneVisualizationComponent_C_AddDefinition_Params Parms{};

	Parms.ZoneDefintion = ZoneDefintion;
	Parms.ZoneLabel = ZoneLabel;
	Parms.ZoneColor = ZoneColor;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.RemoveDefintion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_CreatureAbilityZoneDefinitionZoneDefinition                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::RemoveDefintion(struct FS_CreatureAbilityZoneDefinition& ZoneDefinition, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "RemoveDefintion");

	Params::UBP_AbilityZoneVisualizationComponent_C_RemoveDefintion_Params Parms{};

	Parms.ZoneDefinition = ZoneDefinition;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ClearDefinitions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ClearDefinitions(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ClearDefinitions");

	Params::UBP_AbilityZoneVisualizationComponent_C_ClearDefinitions_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.StopPrintAll
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::StopPrintAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "StopPrintAll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugSequential
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSequential                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugSequential(bool IsSequential)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugSequential");

	Params::UBP_AbilityZoneVisualizationComponent_C_ZoneDebugSequential_Params Parms{};

	Parms.IsSequential = IsSequential;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugSetRange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             DebugRange                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugSetRange(double DebugRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugSetRange");

	Params::UBP_AbilityZoneVisualizationComponent_C_ZoneDebugSetRange_Params Parms{};

	Parms.DebugRange = DebugRange;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugShapeDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Segments                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugShapeDensity(int32 Segments)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugShapeDensity");

	Params::UBP_AbilityZoneVisualizationComponent_C_ZoneDebugShapeDensity_Params Parms{};

	Parms.Segments = Segments;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ReceiveTick");

	Params::UBP_AbilityZoneVisualizationComponent_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugStartAllClient
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugStartAllClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugStartAllClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugStopAllClient
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugStopAllClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugStopAllClient");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugPointDensity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Density                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugPointDensity(int32 Density)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugPointDensity");

	Params::UBP_AbilityZoneVisualizationComponent_C_ZoneDebugPointDensity_Params Parms{};

	Parms.Density = Density;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugSpecific
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      AIAR                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// double                             Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugSpecific(const class FString& AIAR, double Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugSpecific");

	Params::UBP_AbilityZoneVisualizationComponent_C_ZoneDebugSpecific_Params Parms{};

	Parms.AIAR = AIAR;
	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.StartPrintTimer
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::StartPrintTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "StartPrintTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugColours
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugColours()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugColours");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugCommands
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugCommands()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugCommands");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugCloud
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugCloud()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugCloud");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugZones
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugZones()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugZones");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugStopAllServer
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugStopAllServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugStopAllServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ZoneDebugStartAllServer
// (Net, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_AbilityZoneVisualizationComponent_C::ZoneDebugStartAllServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ZoneDebugStartAllServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AbilityZoneVisualizationComponent.BP_AbilityZoneVisualizationComponent_C.ExecuteUbergraph_BP_AbilityZoneVisualizationComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShippingBuild_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsSequential                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_DebugRange                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Segments                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Density                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_AIAR                                          (ZeroConstructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShippingBuild_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AbilityZoneVisualizationComponent_C::ExecuteUbergraph_BP_AbilityZoneVisualizationComponent(int32 EntryPoint, bool CallFunc_IsShippingBuild_ReturnValue, bool K2Node_CustomEvent_IsSequential, double K2Node_CustomEvent_DebugRange, int32 K2Node_CustomEvent_Segments, int32 CallFunc_Clamp_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, int32 K2Node_CustomEvent_Density, const class FString& K2Node_CustomEvent_AIAR, double K2Node_CustomEvent_Duration, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsShippingBuild_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AbilityZoneVisualizationComponent_C", "ExecuteUbergraph_BP_AbilityZoneVisualizationComponent");

	Params::UBP_AbilityZoneVisualizationComponent_C_ExecuteUbergraph_BP_AbilityZoneVisualizationComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsShippingBuild_ReturnValue = CallFunc_IsShippingBuild_ReturnValue;
	Parms.K2Node_CustomEvent_IsSequential = K2Node_CustomEvent_IsSequential;
	Parms.K2Node_CustomEvent_DebugRange = K2Node_CustomEvent_DebugRange;
	Parms.K2Node_CustomEvent_Segments = K2Node_CustomEvent_Segments;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_CustomEvent_Density = K2Node_CustomEvent_Density;
	Parms.K2Node_CustomEvent_AIAR = K2Node_CustomEvent_AIAR;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsShippingBuild_ReturnValue_1 = CallFunc_IsShippingBuild_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


