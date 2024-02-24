#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x68 - 0x58)
// BlueprintGeneratedClass RayTracingSettings.RayTracingSettings_C
class URayTracingSettings_C : public UDHRayTracing
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialExpressionCollectionParameter* RayTracingMaterialParameterCollection;             // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URayTracingSettings_C* GetDefaultObj();

	void ApplyLevelSettings(const class FString& LevelName);
	void ApplyMaterialSettings();
	void ExecuteUbergraph_RayTracingSettings(int32 EntryPoint, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameModeUtilInterface_C> K2Node_DynamicCast_AsGame_Mode_Util_Interface, bool K2Node_DynamicCast_bSuccess, const class FString& K2Node_Event_LevelName, bool CallFunc_GameModeUtils_GetArbNameForLevelFromSaveGame_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsRayTracingCurrentlyActive_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
};

}


