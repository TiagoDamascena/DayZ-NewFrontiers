modded class DayZPlayerImplementThrowing
{
	override void HandleThrowing(HumanInputController pHic, HumanCommandWeapons pHcw, EntityAI pEntityInHands, float pDt)
	{
		PlayerBase player = PlayerBase.Cast(m_Player);

		if (player.NF_IsInSafezone()) {
			return;
		}

		super.HandleThrowing(pHic, pHcw, pEntityInHands, pDt);
	}
}