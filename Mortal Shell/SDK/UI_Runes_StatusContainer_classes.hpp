#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2B8 - 0x230)
// WidgetBlueprintGeneratedClass UI_Runes_StatusContainer.UI_Runes_StatusContainer_C
class UUI_Runes_StatusContainer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon__Test_1;                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon__Test_2;                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon__Test_3;                         // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon_Misc_Test_1;                     // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon_Progress_Test_1;                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon_Progress_Test_2;                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_RuneStatusIcon_C*                  UI_RuneStatusIcon_SpecialEffect_Test_1;            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_Runes_Improvement;                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_Runes_SpecialEffect;              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_RunesMisc;                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUniformGridPanel*                     UniformGridPanel_RunesProgress;                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsStormMode;                                       // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2772[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ChildUniqueID_SpecialEffect;                       // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildUniqueID_Improvement;                         // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildUniqueID_Misc;                                // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildUniqueID_Special;                             // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildRowID_SpecialEffect;                          // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildRowID_Improvement;                            // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildRowID_Misc;                                   // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ChildRowID_Special;                                // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RowMax;                                            // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Runes_StatusContainer_C* GetDefaultObj();

	void ResetEverything();
	void IncreaseRow_SpecialEffect(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseRow_Improvement(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseRow_Special(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseRow_Misc(bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseUniqueID_SpecialEffect(int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseUniqueID_Improvement(int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseUniqueID_Special(int32 CallFunc_Add_IntInt_ReturnValue);
	void IncreaseUniqueID_Misc(int32 CallFunc_Add_IntInt_ReturnValue);
	void SetOrderIDs();
	void RemoveRuneStatusIcon();
	void AddRuneStatusIcon(class FName Rune_ID, enum class Enum_Rune_Category Rune_Category, enum class Enum_Rune_Type Rune_Type, enum class Enum_Rune_Tier Rune_Tier, int32 Rune_Level, class UTexture2D* Rune_Texture, float Rune_Misc, TMap<enum class Enum_Rune_Tier, class UTexture2D*> Rune_Backgrounds, int32* UniqueId, TMap<enum class Enum_Rune_Tier, class UTexture2D*> Local_RuneBackgrounds, float Local_RuneMisc, class UTexture2D* Local_RuneTexture, int32 Local_RuneLevel, enum class Enum_Rune_Tier Local_RuneTier, enum class Enum_Rune_Type Local_RuneType, enum class Enum_Rune_Category Local_RuneCategory, class FName Local_RuneID, TMap<enum class Enum_Rune_Tier, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue_2, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UUI_RuneStatusIcon_C* CallFunc_Create_ReturnValue_3, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue_3);
	void Construct();
	void OnInitialized();
	void ExecuteUbergraph_UI_Runes_StatusContainer(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue);
};

}


