#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x361 - 0x361)
// BlueprintGeneratedClass KickerAnomaly.KickerAnomaly_C
class AKickerAnomaly_C : public ABaseAnomaly_C
{
public:

	static class UClass* StaticClass();
	static class AKickerAnomaly_C* GetDefaultObj();

	void OnDamageApplied(class ASHPlayerController* PlayerController, bool* Result, bool CallFunc_OnDamageApplied_Result);
};

}


