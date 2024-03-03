#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
class IUltra_Dynamic_Weather_Interface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IUltra_Dynamic_Weather_Interface_C* GetDefaultObj();

	void Get_Intended_Cloud_Direction(float* Intended_Cloud_Direction);
	void Get_Intended_Cloud_Speed(float* Intended_Cloud_Speed);
	void Update_Cloud_Coverage_from_UDS(float Cloud_Coverage);
	void Initialize_Weather();
	void Set_Current_Season(enum class EUDS_Season Season);
};

}


