#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x108 (0x338 - 0x230)
// WidgetBlueprintGeneratedClass UI_EnemyIndicator.UI_EnemyIndicator_C
class UUI_EnemyIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Targeted;                                     // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_EnemyHealth;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_EnemyHealth_Glow;                            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Indicator;                                   // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_HealthBar;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Target;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_EnemyIndicator;                            // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Damage;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             ArrowScreenPosition;                               // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AEnemyCharacter_C*                     EnemyBP;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Health;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_HealthGlow;                                    // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPVisibility            E_EnemyHPVisibility;                               // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_EnemyHPOpacity               E_EnemyHPOpacity;                                  // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AD1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageOpacity_Target;                              // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageValue;                                       // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageOpacity;                                     // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          DamageTimer;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDisplayDamageNumbers;                             // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AF0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Timer;                                             // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        HPOpacity_Target;                                  // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HPOpacity_RenderOpacity;                           // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Update;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Target_RenderOpacity;                              // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Target_OpacityTarget;                              // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HP_Opacity;                                        // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health;                                            // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Health_Max;                                        // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HP_FillAmount;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1B1F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FullHealthColor;                                   // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LowHealthColor;                                    // 0x318(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     PC;                                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Remove;                                      // 0x330(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_EnemyIndicator_C* GetDefaultObj();

	enum class ESlateVisibility Get_Indicator_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_GetHideUI_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void PlayTargetAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetTargetIndicatorTint(float CurrentHealth, float MaxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1);
	void SetTextDamageOpacity(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void SetHealthBar(float CurrentHealth, float MaxHealth, float CallFunc_MapRangeClamped_ReturnValue);
	void SetHealth(TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth);
	void OpacityLevels(enum class Enum_EnemyHPOpacity Enum, float* Value, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default);
	void OpacityBasedOnDistance(float Distance, float* Opacity, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class Enum_EnemyHPOpacity Temp_byte_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float CallFunc_OpacityLevels_Value, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue);
	void SetHealthMaterialsOpacity(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_OpacityBasedOnDistance_Opacity, float CallFunc_OpacityLevels_Value, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	bool IsBossEnemy(bool CallFunc_ActorHasTag_ReturnValue);
	void SetTargetOpacity(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void SetHealthBarRenderOpacity(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue);
	void ResetHealthOpacity();
	void HPBarVisibilityChanged(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsBossEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void ResetTextDamage();
	void UpdateDamangeNumbersState(bool Show);
	void GetDamageNumbers(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show);
	void GetHPState(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility);
	void HP_CreateMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void IndicatorPosition(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void OnInitialized();
	void OnEnemyHPVisibilityChanged(enum class Enum_EnemyHPVisibility Visibility);
	void OnEnemyHPOpacityChanged(enum class Enum_EnemyHPOpacity Opacity);
	void OnDamageNumbersChanged(bool Show);
	void UpdateIndicator_Set();
	void OnTakenDamage_Bind();
	void OnTakenDamage_Set(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void DamageText_Update(float Damage);
	void DamageText_Remove();
	void Show_Reset();
	void OnTakenDamage_Unbind();
	void Hide_Reset();
	void OnEnemyDeath_Bind();
	void OnEnemyDeath_Set();
	void RemoveWidget();
	void OnEnemyHPVisibilityChanged_Unbind();
	void UpdateIndicator_Bind();
	void HealthTimer_End();
	void HealthTimer_Set();
	void OnEnemyHPOpacityChanged_Unbind();
	void OnDamageNumbersChanged_Unbind();
	void OnEnemyTarget(class ABaseCharacter_C* TargetedEnemy);
	void ExecuteUbergraph_UI_EnemyIndicator(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_GetDamageNumbers_Show, enum class Enum_EnemyHPVisibility K2Node_CustomEvent_Visibility, enum class Enum_EnemyHPOpacity K2Node_CustomEvent_Opacity, bool K2Node_CustomEvent_Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage_1, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsBossEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsBossEnemy_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class ABaseCharacter_C* K2Node_CustomEvent_TargetedEnemy, class FText CallFunc_Conv_FloatToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue);
};

}


