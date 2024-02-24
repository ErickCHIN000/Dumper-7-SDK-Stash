#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x2F0 - 0x260)
// WidgetBlueprintGeneratedClass wid_virtuaCopAimOffsight.wid_virtuaCopAimOffsight_C
class UWid_virtuaCopAimOffsight_C : public UCGVirtuaIndicatorOffsight
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UMenuAnchor*                           AimIndicatorAnchor;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AimIndicatorOffsightCircle;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                AimIndicatorOffsightExclamation;                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          VisibilityContainer;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACh_Hero_00_C*                         Hero;                                              // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              HueShiftMat;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaserNormTime;                                     // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             PositionOnEdge;                                    // 0x2AC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasInit;                                           // 0x2B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_36D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACGAICharacter*                        Shooter;                                           // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CheckForHeroVisibility;                            // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         HeroVisible;                                       // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_370[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UMaterialInstance>      CustomMaterial;                                    // 0x2C8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_virtuaCopAimOffsight_C* GetDefaultObj();

	void GetShortestEdge(TArray<float>& InDistances, enum class EClockDirection* OutEdge, float CurrentShortest, int32 Idx, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class EClockDirection Temp_byte_Variable, enum class EClockDirection Temp_byte_Variable_1, enum class EClockDirection Temp_byte_Variable_2, enum class EClockDirection Temp_byte_Variable_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, enum class EClockDirection K2Node_Select_Default);
	void Start(class AActor* Actor);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void RemoveIfNotValid();
	void SetCustomVirtuaOffsightMaterial(TSoftObjectPtr<class UMaterialInstance>& CustomMaterial);
	void ExecuteUbergraph_wid_virtuaCopAimOffsight(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class ACGVirtuaShooter* K2Node_DynamicCast_AsCGVirtua_Shooter, bool K2Node_DynamicCast_bSuccess, const struct FCGVirtuaLaserInfo& CallFunc_GetLaserInfo_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_GetViewportScale_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreenBidirectional_ScreenPosition, bool CallFunc_ProjectWorldToScreenBidirectional_bTargetBehindCamera, bool CallFunc_ProjectWorldToScreenBidirectional_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_DegreesToRadians_ReturnValue, float CallFunc_PolarToCartesian_OutX, float CallFunc_PolarToCartesian_OutY, int32 CallFunc_PolarToCartesian_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MapCircleToRectangle_ReturnValue, class AActor* K2Node_Event_Actor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsValid_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class ACGAICharacter* K2Node_DynamicCast_AsCGAICharacter, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsHeroVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, TSoftObjectPtr<class UMaterialInstance> K2Node_Event_CustomMaterial, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3);
};

}


