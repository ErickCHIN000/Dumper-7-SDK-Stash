#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x250 - 0x238)
// BlueprintGeneratedClass ba_Minimap.ba_Minimap_C
class Aba_Minimap_C : public ASceneCapture2D
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Ubp_CharacterTag_C*                    Img4Ch;                                            // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class Abp_MinimapTag_C*                      NewVar_0;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_Minimap_C* GetDefaultObj();

	void WorldLocationToMinimap(struct FTransform& T, const struct FVector& Location, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue);
	void RemoveScaleFromCursor(const struct FVector2D& CursorNormalized, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Position, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue);
	struct FVector MinimapPositionToWorld(const struct FVector2D& Position, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
	void NormalizeLength(float Length, float* NormalizedLength, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1);
	void ActorToMap(class AActor* Actor, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, float* Angle, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_InvertTransform_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos, float CallFunc_MapPositionToMinimap_Angle, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetPlayerPos(const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_InvertTransform_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos, float CallFunc_MapPositionToMinimap_Angle);
	void MapPositionToMinimap(struct FTransform& T, class AActor* Actor, const struct FVector2D& Min, const struct FVector2D& Max, struct FVector2D* Pos, float* Angle, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorFloat_ReturnValue, const struct FVector& CallFunc_Divide_VectorFloat_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue);
	void GetPotentialTags(const struct FVector2D& Min, const struct FVector2D& Max, TArray<struct FSt_MinimapInfo>* Result1, class ACGCharacter* LocalCharacter, class Abp_MinimapTag_C* LocalCustomTag, const TArray<struct FSt_MinimapInfo>& Result, const struct FTransform& InvTransform, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class UTexture2D* CallFunc_GetImage_Image, bool CallFunc_NotEqual_ObjectObject_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos, float CallFunc_MapPositionToMinimap_Angle, const struct FSt_MinimapInfo& K2Node_MakeStruct_st_MinimapInfo, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_AABB2D_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class ACGCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, class ACGCharacter* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<class Abp_MinimapTag_C> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, const struct FVector2D& CallFunc_MapPositionToMinimap_Pos_1, float CallFunc_MapPositionToMinimap_Angle_1, const struct FSt_MinimapInfo& K2Node_MakeStruct_st_MinimapInfo_1, const struct FVector2D& CallFunc_Add_Vector2DFloat_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_AABB2D_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, TArray<class Abp_MinimapTag_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, const struct FTransform& CallFunc_InvertTransform_ReturnValue, class Abp_MinimapTag_C* CallFunc_Array_Get_Item_1, bool CallFunc_GetIsEnabled_IsEnabled, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void ReceiveTick(float DeltaSeconds);
	void Capture();
	void ExecuteUbergraph_ba_Minimap(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


